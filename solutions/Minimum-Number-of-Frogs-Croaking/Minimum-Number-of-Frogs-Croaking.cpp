class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int lenC = 0;
        int lenR = 0;
        int lenO = 0;
        int lenA = 0;
        int lenK = 0;
        int sum = 0;
        int ans = 0;
        int finish = 0;
        for(int i=0;i<croakOfFrogs.length();i++) {
            char c = croakOfFrogs[i];
            if(c == 'c') {
                lenC++;
                // cout<<ans<<" "<<finish<<endl;
                if(finish > 0) {
                    finish--;
                } else {
                    ans++;
                }
            } else if(c == 'r') {
                lenR++;
            } else if(c == 'o') {
                lenO++;
            } else if(c == 'a') {
                lenA++;
            } else if(c == 'k') {
                lenK++;
                if (lenC >= lenR && lenR >= lenO && lenO >= lenA && lenA >= lenK) {
                    finish++;
                }
                
            }
            
            if(lenR > lenC || lenO > lenR || lenA > lenO || lenK > lenA) {
                return -1;
            }
            
        }
        
        if (lenC == lenR && lenO == lenR && lenA == lenO && lenK == lenA) {
            return ans;
        } else {
            return -1;
        }
    }
};