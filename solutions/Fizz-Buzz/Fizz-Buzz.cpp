class Solution
{
  public:
    vector<string> fizzBuzz(int n)
    {
        string symbolThree = "Fizz";
        string symbolFive = "Buzz";
        vector<string> ans;
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
            {
                ans.push_back(symbolThree + symbolFive);
            }
            else if (i % 3 == 0)
            {
                ans.push_back(symbolThree);
            }
            else if (i % 5 == 0)
            {
                ans.push_back(symbolFive);
            }
            else
            {
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};