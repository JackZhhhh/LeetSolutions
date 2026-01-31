class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = haystack.find(needle);
        if ( x <= haystack.length())
            return x;
        else
            return -1;
    }
};