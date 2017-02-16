## 题意：
将矩阵顺时针旋转90度

## 要求：


## 思路：
模拟

##　更新：
总结leetcode数组题目

## Description:
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Follow up:
Could you do this in-place?

## Idea:
https://discuss.leetcode.com/topic/6796/a-common-method-to-rotate-the-image

    /*
     * clockwise rotate
     * first reverse up to down, then swap the symmetry 
     * 1 2 3     7 8 9     7 4 1
     * 4 5 6  => 4 5 6  => 8 5 2
     * 7 8 9     1 2 3     9 6 3
    */
    void rotate(vector<vector<int> > &matrix) {
         reverse(matrix.begin(), matrix.end());
         for (int i = 0; i < matrix.size(); ++i) {
             for (int j = i + 1; j < matrix[i].size(); ++j)
                 swap(matrix[i][j], matrix[j][i]);
         }
     }
     
     /*
      * anticlockwise rotate
      * first reverse left to right, then swap the symmetry
      * 1 2 3     3 2 1     3 6 9
      * 4 5 6  => 6 5 4  => 2 5 8
      * 7 8 9     9 8 7     1 4 7
     */
     void anti_rotate(vector<vector<int> > &matrix) {
         for (auto vi : matrix) reverse(vi.begin(), vi.end());
         for (int i = 0; i < matrix.size(); ++i) {
             for (int j = i + 1; j < matrix[i].size(); ++j)
                 swap(matrix[i][j], matrix[j][i]);
         }
     }
