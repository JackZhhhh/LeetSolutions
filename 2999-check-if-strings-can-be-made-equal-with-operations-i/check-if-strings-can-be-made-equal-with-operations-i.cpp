class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string a1, a2, a3;
        a1 = string() + s1[2] + s1[1] + s1[0] + s1[3];
        a2 = string() + s1[0] + s1[3] + s1[2] + s1[1];
        a3 = string() + s1[2] + s1[3] + s1[0] + s1[1];
        cout << a1 << " " << a2 << " " << a3 << endl;
        return (a1 == s2 || a2 == s2 || a3 == s2 || s1 == s2);
    }
};