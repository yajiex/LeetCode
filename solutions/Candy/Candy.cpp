
class Solution {
public:
    int candy(vector<int> &ratings) {
        int size=ratings.size();
        if(size==0)
        {
            return 0;
        }
        int sum=1;
        int length=0;
        int pre=1;
        int bef=pre;
        for(int i=1;i<size;i++)
            if(ratings[i]<ratings[i-1])
            {
                length++;
                if(bef<=length)
                    sum++;
                sum+=length;
                pre=1;
            }
            else
            {
                int cur=0;
                if(ratings[i]>ratings[i-1])
                    cur=pre+1;
                else
                    cur=1;
                sum+=cur;
                pre=cur;
                length=0;
                bef=cur;
            }
        return sum;
    }
};


 