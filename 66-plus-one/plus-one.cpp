class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        digits[0] += 1;
        int i = 0;
        while(true)
        {
            if(digits[i] == 10)
            {
                digits[i] = 0;
                i++;
                if(i == digits.size())
                {
                    digits.push_back(1);
                    reverse(digits.begin(), digits.end());
                    return digits;
                }
                digits[i] +=1;
            }
            else
            {
                reverse(digits.begin(), digits.end());
                return digits;
            }
        }
    }
};