class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)
            return 0; 
        if(s.size() == 1)
            return 1;
        if(s.size() == 2)
        {
            if(s[0] != s[1])
                return 2;
            else
                return 1;
        }
        vector <char> longest_string;
        vector <int> lengths;
        int i = 0;
        while(i < s.size())
        {
            if(find(longest_string.begin(), longest_string.end(), s[i]) == longest_string.end())
            {
                longest_string.push_back(s[i]);
                i++;
            }
            else
            {
                lengths.push_back(longest_string.size());
                i = i - longest_string.size() + 1;
                longest_string.clear();
            }
        }
        lengths.push_back(longest_string.size());
        return *max_element(lengths.begin(), lengths.end());
    }
};