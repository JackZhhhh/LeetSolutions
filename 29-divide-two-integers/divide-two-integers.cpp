class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 2147483647 && divisor == -1)
            return -2147483647;
        bool isNeg = false;
        if(((divisor < 0) && (dividend > 0)) || ((divisor > 0) && (dividend < 0)))
            isNeg = true;
        if((dividend == -2147483648 || dividend == 2147483647)&& isNeg && llabs(divisor) ==1)
            return INT_MIN;
        else if ((dividend == -2147483648 || dividend == 2147483647) && llabs(divisor) ==1)
            return INT_MAX;
        long long end = llabs(dividend);
        long long sor = llabs(divisor);
        long long tempsor = sor;
        long long i = 0;
        while(end >= sor)
        {
            i++;
            sor+=tempsor;
        }
        if (isNeg)
            return -i;
        return i;
    }
};