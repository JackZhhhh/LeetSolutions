class Solution {
public:

    string CombineStr(string a, string b)
    {
        int i = 0;
        string ans = "";
        while(i < a.length() && i < b.length() && a[i] == b[i])
        {
            ans += a[i];
            i++;
        }
        return ans;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1)
            return strs[0];
        string sol = strs[0];
        for(int i = 1; i < strs.size(); i++)
        {
            sol = CombineStr(sol, strs[i]);
        }
        return sol;
    }
};