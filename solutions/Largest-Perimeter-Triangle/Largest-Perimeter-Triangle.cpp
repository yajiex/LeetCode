class Solution
{
  public:
    // The goal is to find the largest number n1, where two other numbers, n2 and n3, exist, and n1 > n2 && n1 > n3, and n1 < n2 + n2.
    // If we sort our sizes, we just need to find the largest A[i] such as A[i] < A[i - 1] + A[i - 2]. So, we analyze triplets largest to smallest, and return the perimeter for the first triplet that matches our criterion.

    int largestPerimeter(vector<int> &A)
    {
        sort(begin(A), end(A));
        for (auto i = A.size() - 1; i >= 2; --i)
            if (A[i] < A[i - 1] + A[i - 2])
                return A[i] + A[i - 1] + A[i - 2];
        return 0;
    }
};