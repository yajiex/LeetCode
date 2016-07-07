## Description:

Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example:
Given a = 1 and b = 2, return 3.

Credits:
Special thanks to @fujiaozhu for adding this problem and creating all test cases.

Subscribe to see which companies asked this question

## Idea

Use `^`(xor) to simulate binary addition (without carry), use `&` and `<<` to calculate the carry, then recursively repeat above steps until the carry is 0.