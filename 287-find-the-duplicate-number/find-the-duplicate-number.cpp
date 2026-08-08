class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> isIn (nums.size());
        for(int i : nums)
        {
            isIn[i]++;
            if(isIn[i] > 1)
                return i;
        }   
        return -1;
    }
};