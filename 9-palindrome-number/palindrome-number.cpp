class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        else if (x==0)
            return true;
        else
        {
            int length = floor(log10(x));
            string s = to_string(x);
            for(int i =0; i < length; i++)
            {
                if(s[i] != s[length-i])
                {
                    return false;
                }
            }
            return true;
        }
    }
};