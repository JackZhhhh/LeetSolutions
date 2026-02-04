class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0)
            return false;
        double exp = log(n) / log(3);
        return fabs(exp - round(exp)) < 1e-10;
    }
};