class Solution {
public:
    string intToRoman(int num) {
        string s = to_string(num);
        unordered_map<int, char> key;
        key[0] = 'I';
        key[1] = 'V';
        key[2] = 'X';
        key[3] = 'L';
        key[4] = 'C';
        key[5] = 'D';
        key[6] = 'M';
        int iter = s.size()-1;
        string ans = "";
        for(char c : s)
        {
            int max = c - '0';
            if(max <= 3)
            {
                for(int i = 0; i < max; i++)
                {
                    ans+= key[iter * 2];
                }
            }
            else if(max == 4 || max == 9)
            {
                ans+=key[iter * 2];
                if(max == 9)
                    ans+=key[iter * 2 + 2];
                else
                    ans+=key[iter * 2+1];
            }
            else if(max == 5)
            {
                ans+=key[iter * 2 + 1];
            }
            else
            {
                ans+=key[iter * 2 + 1];
                for(int i = 5; i < max; i++)
                {
                    ans+=key[iter*2];
                }
            }
            iter--;
        }
        return ans;
    }
};