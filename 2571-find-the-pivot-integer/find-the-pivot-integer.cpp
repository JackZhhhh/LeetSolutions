class Solution {
public:
    int pivotInteger(int n) {
        int i = n/2;
        double sum1;
        double sum2; 
        if (n==1)
            return 1;
        while(i < n)
        {
            sum1 = (1 + i) / 2.0 * i;
            sum2 = (i + n) / 2.0 * (n-i + 1);
            if(sum1 == sum2)
                return i;
            else
                i++;
        }
        return -1;
    }
};