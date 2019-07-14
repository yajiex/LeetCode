
// class Solution {
// public:
//     double findKth(int A[],int m,int B[],int n,int k)
//     {
//         if(m>n)
//             return findKth(B,n,A,m,k);
//         if(m==0)
//             return B[k-1];
//         if(k==1)
//             return min(A[0],B[0]);
//         int pa=min(k/2,m);
//         int pb=k-pa;
//         if(A[pa-1]<B[pb-1])
//             return findKth(A+pa,m-pa,B,n,k-pa);
//         else if(A[pa-1]>B[pb-1])
//             return findKth(A,m,B+pb,n-pb,k-pb);
//         else
//             return A[pa-1];
//     }
//     double findMedianSortedArrays(int A[], int m, int B[], int n) {
//         int total=m+n;
//         if(total%2)
//             return findKth(A,m,B,n,total/2+1);
//         else
//             return (findKth(A,m,B,n,total/2)+findKth(A,m,B,n,total/2+1))/2;
//     }
// };


// 2019-07-14
// O(log(m+n))
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        if ((n + m) % 2 == 1)
        {
            return findKth(nums1, 0, nums2, 0, (n + m + 1) / 2);
        }
        else
        {
            return double(findKth(nums1, 0, nums2, 0, (n + m) / 2) + findKth(nums1, 0, nums2, 0, (n + m) / 2 + 1 )) / 2;
        }
    }

private:
    double findKth(vector<int>& nums1, int s1, vector<int>& nums2, int s2, int k)
    {
        int n = nums1.size();
        int m = nums2.size();
        if (n - s1 > m - s2)
        {
            return findKth(nums2, s2, nums1, s1, k);
        }
        
        if (s1 == n)
        {
            return nums2[k - 1];
        }
        
        if (k == 1)
        {
            return min(nums1[s1], nums2[s2]);
        }
        
        int pa = min(k/2, n - s1);
        int pb = k - pa;
        if (nums1[s1 + pa - 1] < nums2[s2 + pb - 1])
        {
            return findKth(nums1, s1 + pa, nums2, s2, k - pa);
        }
        else if (nums1[s1 + pa - 1] > nums2[s2 + pb - 1])
        {
            return findKth(nums1, s1, nums2, s2 + pb, k - pb);
        }
        else
        {
            return nums1[s1 + pa - 1];
        }
    }
};