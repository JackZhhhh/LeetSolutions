class Solution {
public:
    int minOperations(string s) {
        int oper1 = 0;
        int oper2 = 0;
        int length = s.size();
        for(int i = 0; i < length; i++)
        {
            if(i %2 == 0 && s[i] != '0')
                oper1++;
            if(i %2 == 1 && s[i] != '1')
                oper1++;
            if(i%2==0 && s[i]!='1')
                oper2++;
            if(i%2!=0 && s[i]!='0')
                oper2++;
        }
        return min(oper1, oper2);
    }
};