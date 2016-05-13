
class Solution {
public:
    void process(vector<string> &words, vector<string>&result, int start, int end, int L) {
        int size = 0;
        // end of the setence, left justification
        if(end==words.size()-1 ) {
            string s;
            int last_space = L;
            for(int i=start; i<=end; i++) {
                last_space-=words[i].size();
                s+=words[i];
                if(i!=end) {
                    s+= " ";
                    last_space--;
                }else {
                    s+= string(last_space, ' ');
                }
            }
            result.push_back(s); return;
        }
        // find the total size of the words
        for(int i=start; i<=end; i++) {
            size+=words[i].size();
        }
        // find the total space size
        int space = L-size;
        // if it's just one word, left justification
        if(start==end) {
            string s = words[start];
            s+= string((L-size), ' ');
            result.push_back(s); return;
        }
        // get the average space - n words needs (n-1) consecutive space
        int e_space = space/(end-start);
        // get the leftover space for the first kth words
        int n=space-e_space*(end-start);
        string s;
        for(int i=start; i<=end; i++) {
            s+= words[i];                       // word
            if(i!=end) s+=string(e_space, ' '); // space
            if((n--)>0) s+=string(1, ' ');      // additional space if any
        }
        result.push_back(s);
    }
    vector<string> fullJustify(vector<string> &words, int L) {
        vector<string> result;
        if (L<0) 
            return result;
        if(words.size()==0) 
            return result;
        int start = 0; int sofar = 0;
        for(int i=0; i<words.size(); i++) {
            if(i+1<words.size() && (sofar+words[i].size()+words[i+1].size()<L)) {
                sofar = sofar+ words[i].size()+1;
            }else{
                process(words, result, start, i, L);
                start = i+1; 
                sofar = 0;
            }
        }

        return result;
    }
};
 