class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.size(), word2.size());
        int max_n = max(word1.size(), word2.size());
        bool Big1 = (word1.size() > word2.size());
        string ans = "";
        for(int i = 0; i < n; i ++)
        {
            ans += word1[i];
            ans += word2[i];
        }
        if(Big1)
        {
            ans += word1.substr(n, max_n-n);
        }
        else
        {
            ans += word2.substr(n, max_n-n);
        }
        return ans;
    }
};