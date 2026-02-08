class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        int i = 0;
        while(i <= n)
        {
            int s = bitset<32>(i).count();
            ans.push_back(s);
            i++;
        }
        return ans;
    }
};