class Solution {
public:
    int romanToInt(string s) {
        map<char, int> key;
        key['I'] = 1;
        key['V'] = 5;
        key['X'] = 10;
        key['L'] = 50;
        key['C'] = 100;
        key['D'] = 500;
        key['M'] = 1000;
        int ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(i==0) {ans += key[s[i]];}
            else
            {
                if(key[s[i-1]] < key[s[i]])
                {
                    ans -= key[s[i-1]] * 2;
                }
                ans+=key[s[i]];
            }
        }
        return ans;
    }
};