// https://leetcode.com/problems/longest-duplicate-substring/discuss/291048/C%2B%2B-solution-using-Rabin-Karp-and-binary-search-with-detailed-explaination
// This is a tricky one on two sides:
// 1. how to find the length of the lonest string
// 2. how to compare the string of the same length
// For the first point, we can use binary search for answer since if a string of length n is
// invalid then for all k > n, there's definetly no solution because length n strings would 
// become a substring of the length k string. Similarly if a string of length n is valid, we have
// no use of checking strings with length less than n. Due to these properties we can use
// binary search for final answer.
// For the second point, we are actually trying to compare a sliding window of string, and
// Rabin Karp algorithm is perfect for doing so. The algorithm basically computes the 
// hash value of all the string and start a character by character comparison only if the two 
// strings have the same hash value. In order to avoid collision we can use a large prime number
// such as 1e9 + 7, 19260817, 99999989, etc.
// The implementation looks as follows:
class Solution {
public:
    string longestDupSubstring(string S) {
        ans = "";
        power = vector<int>(S.length(), 1);
        int i;
		// precompute all the pow(26, k) 0 < k < S.length() modulus prime
        for (i = 1 ; i < S.length(); i++) {
            power[i] = (power[i - 1] * 26) % prime;
        }
        int low = 0, high = S.length();
		// code for the binary search, very trivial
        while (low <= high) {
            int mid = low + (high - low) / 2;
            string tmp = validate(mid, S);
            if (tmp.length() == 0) {
                high = mid - 1;
            } else {
                if (tmp.length() > ans.length()) {
                    ans = tmp;
                }
                low = mid + 1;
            }
        }
        
        return ans;
    }
    
private:
   // large prime number
    int prime = 19260817;
    string ans;
    vector<int> power;
    string validate(int desire, string &str) {
       // if the desire length is 0, return the empty string
        if (desire == 0) return "";
        unordered_map<int, vector<int>> hash = unordered_map<int, vector<int>>();
        long long current = 0;
        int i;
		// compute the hash value of the first "length" characters
        for (i = 0 ; i < desire; i++) {
            current = ((current * 26) % prime + (str[i] - 'a')) % prime;
        }
        // store the result in a hashmap that maps from hashvalue to starting index
        hash[current] = vector<int>(1, 0);
        for (i = desire ; i < str.length(); i++) {
		    // sliding window to maintain the current substr's hash value
			// be aware of overflow
            current = ((current - (long long) power[desire - 1] * (str[i - desire] - 'a')) % prime + prime) % prime;
            current = (current * 26 + (str[i] - 'a')) % prime;
           // if that hash value is not in our set we do nothing and add the value to our map
            if (hash.find(current) == hash.end()) {
                hash[current] = vector<int>(1, i - desire + 1);
            } else {
			   // otherwise, start a string by string comparason and see if there's a match
                for (auto it : hash[current]) {
                    
                    if (strcmp((str.substr(it, desire)).data(), str.substr(i - desire + 1, desire).data()) == 0) {
                        return str.substr(it, desire);
                    }
                }
                
                hash[current].push_back(i - desire + 1);
            }
        }
        
        return "";
    }
};