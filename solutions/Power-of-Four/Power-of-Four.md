## Description:
Given an integer (signed 32 bits), write a function to check whether it is a power of 4.

Example:
Given num = 16, return true. Given num = 5, return false.

Follow up: Could you solve it without loops/recursion?

## Idea:
For n meeting n & (n-1) ===0, it must be divided by 2 (Power-of-Two has proved that), if n can be divided by 4, then (4^n-1)%3 === 0, because 4^n - 1 = (2^(n/2) + 1)(2^(n/2) - 1), as we know, 2^(n/2) can not be divided by 3, either left 1 or 2, so there must be one left 0 among 2^(n/2) - 1 and 2^(n/2) + 1