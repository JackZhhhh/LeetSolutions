class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> MergedArray;
        int i = 0;
        int j = 0;
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] <= nums2[j])
            {
                MergedArray.push_back(nums1[i]);
                i++;
            }
            else if(nums2[j] < nums1[i])
            {
                MergedArray.push_back(nums2[j]);
                j++;
            }
        }
        while(i < nums1.size())
        {
            MergedArray.push_back(nums1[i]);
            i++;
        }
        while(j < nums2.size())
        {
            MergedArray.push_back(nums2[j]);
            j++;
        }
        if(MergedArray.size()%2 ==1)
        {
            return MergedArray[MergedArray.size() / 2] * 1.0;
        }
        else
        {
            return (MergedArray[MergedArray.size() / 2] + MergedArray[MergedArray.size() / 2 - 1]) / 2.0;
        }
    }
};