class Solution {
public:
    int hammingDistance(int x, int y) {
        string a = bitset<32>(x).to_string();
        string b = bitset<32>(y).to_string();
        
        while(a.length() < b.length())
        {
            a = '0' + a;
        }
        while(b.length() < a.length())
        {
            b = '0' + b;
        }

        int ans = 0;

        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] != b[i])
                ans++;
        }
        return ans;
    }
};