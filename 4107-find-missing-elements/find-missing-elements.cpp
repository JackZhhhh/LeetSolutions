class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int iter = 0;
        for(int i = nums[0]; i < nums[nums.size()-1]; i++)
        {
            if(nums[iter] == i) {iter++;}
            else 
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};