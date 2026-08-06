class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            int area = min(height[left], height[right]);
            area = area * (right - left);
            ans = max(ans, area);
            if(height[left] > height[right])
            {
                right--;
            }
            else
                left++;
        }
        return ans;
    }
};