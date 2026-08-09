class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            string s = to_string(n);
            int ans = 1;
            for(char c : s)
            {
                ans *= (c - '0');
            }
            if(ans % t == 0)
                return n;
            n++;
        }
    }
};