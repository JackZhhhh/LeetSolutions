class Solution {
public:

    bool isSelfDividing(int n)
    {
        string s = to_string(n);
        for(char c : s)
        {
            int divisor = c - '0';
            if(divisor == 0)
                return false;
            if(n % divisor != 0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> solutions;
        for(int i = left; i <= right; i++)
        {
            if(isSelfDividing(i))
                solutions.push_back(i);
        }
        return solutions;
    }
};