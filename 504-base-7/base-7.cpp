class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        bool isNeg = false;
        if(num < 0)
            isNeg = true;
        num = abs(num);
        string a = "";
        while(num >= 1)
        {
            int temp = num % 7;
            a = to_string(temp) + a;
            num /=7;
        }
        if(isNeg)
            a = "-" + a;
        return a;
    }
};