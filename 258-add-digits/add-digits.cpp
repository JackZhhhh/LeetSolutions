class Solution {
public:

    int sumOfCurrent (int n)
    {
        string s = to_string(n);
        int sum = 0;
        for(char c : s)
        {
            sum += c - '0';
        }
        return sum;
    }
    int addDigits(int num) {
        while(num >= 10)
        {
            num = sumOfCurrent(num);
        }
        return num;
    }
};