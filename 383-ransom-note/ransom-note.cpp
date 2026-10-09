class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> words;
        for(char c : magazine)
        {
            words[c] += 1;
        }
        for(char c : ransomNote)
        {
            if(words[c] == 0)
                return false;
            words[c]--;
        }
        return true;
    }
};