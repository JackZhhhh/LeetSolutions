class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxWealth = 0;
        for(int[] customer : accounts)
        {
            int CustomerTotal = 0;
            for(int bank : customer)
            {
                CustomerTotal +=bank;
            }
            maxWealth = Math.max(CustomerTotal, maxWealth);
        }
        return maxWealth;
    }
}