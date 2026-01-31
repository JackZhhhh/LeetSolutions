class Solution {
public:
    int myAtoi(string s) {
        try 
        {
            return stoi(s);
        }
        catch (const invalid_argument&)
        {
            return 0;
        }
        catch (const out_of_range)
        {
            if(s.find("-") <= s.length())
                return INT_MIN;
            else
                return INT_MAX;
        }
    }
};