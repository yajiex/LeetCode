// class Solution {
// public:
//     bool backspaceCompare(string S, string T) {
//         int i = S.length() - 1, j = T.length() - 1;
//         while (1) {
//             for (int back = 0; i >= 0 && (back || S[i] == '#'); --i)
//                 back += S[i] == '#' ? 1 : -1;
//             for (int back = 0; j >= 0 && (back || T[j] == '#'); --j)
//                 back += T[j] == '#' ? 1 : -1;
//             if (i >= 0 && j >= 0 && S[i] == T[j])
//                 i--, j--;
//             else
//                 return i == -1 && j == -1;
//         }
//     }
// };

// 2020-04-09
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int n = S.length();
        int m = T.length();
        int i = n-1;
        int j = m-1;
        while(true) {
            i = findNext(S, i);
            j = findNext(T, j);
            if (i>=0 && j>=0) {
                if (S[i] != T[j]) {
                    return false;
                } else {
                    i--;
                    j--;
                }
            } else if (i<0 && j<0) {
                return true;
            } else {
                return false;
            }
        }
    }
private:
    int findNext(string s, int index) {
        int cnt = 0;
        while(index >= 0) {
            if(s[index] == '#') {
                cnt++;
            } else {
                cnt -= 1;
                if (cnt < 0) {
                    break;
                }
            }
            index--;
        }
        return index;
    }
};