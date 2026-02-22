class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <int> ans;
        int size = nums.size();
        ans.push_back(nums[size - 1] * nums[size - 2] * nums[size - 3]);
        ans.push_back(nums[0] * nums[1] * nums[size-1]);
        return *max_element(ans.begin(), ans.end());
    }
};