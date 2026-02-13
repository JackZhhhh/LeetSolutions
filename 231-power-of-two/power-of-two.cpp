class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        double value = log(n) / log(2);
        if(abs((int) value - value) < 1e-9)
            return true;
        return false;
    }
};