class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n = cost.size();
        int ans = 0;
        int count = 0;
        for(int i = n ; i > 0; i--)
        {
            count++;
            if(count%3 != 0)
                ans+=cost[i-1];
        }
        return ans;
    }
};