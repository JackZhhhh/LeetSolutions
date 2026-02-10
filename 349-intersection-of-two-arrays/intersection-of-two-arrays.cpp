class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        if(nums1.size() < nums2.size())
        {
            for (int a : nums1)
            {
                auto it_a = find(nums2.begin(), nums2.end(), a);
                auto it_ans = find(ans.begin(), ans.end(), a);
                if(it_a != nums2.end() && it_ans == ans.end())
                    ans.push_back(a);
            }
            return ans;
        }
        else
        {
            for (int a : nums2)
            {
                auto it_a = find(nums1.begin(), nums1.end(), a);
                auto it_ans = find(ans.begin(), ans.end(), a);
                if(it_a != nums1.end() && it_ans == ans.end())
                    ans.push_back(a);
            }
            return ans;
        }
    }
};