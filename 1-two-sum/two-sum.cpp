class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int SizeOfNums = nums.size();
        vector <int> solutions;
        for(int i = 0; i < SizeOfNums; i++)
        {
            for (int j =i+1; j < SizeOfNums; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    solutions.push_back(i);
                    solutions.push_back(j);
                }
            }
        }
        return solutions;
    }
};