class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxNumCount = 0;
        map<int, bool> count;
        for(int i = nums.size() - 1; i > -1; i--)
        {
            if(count[nums[i]]){}
            else
            {
                count[nums[i]] = true;
                maxNumCount++;
                if(maxNumCount == 3)
                {
                    return nums[i];
                }
            }
        }
        return nums[nums.size()-1];
    }
};