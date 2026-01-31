class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums;
        for(int c : nums1)
            nums.push_back(c);
        for(int c : nums2)
            nums.push_back(c);
        sort(nums.begin(), nums.end());
        if(nums.size()%2 ==1)
        {
            return nums[nums.size() / 2] * 1.0;
        }
        else
        {
            return (nums[nums.size() / 2] + nums[nums.size() / 2 - 1]) / 2.0;
        }
    }
};