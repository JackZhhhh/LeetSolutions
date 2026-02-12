class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector <int> ans;
        int ops;
        for(int i = 0; i < boxes.size(); i++)
        {
            ops = 0;
            string temp = boxes;
            while(temp.find('1') != string::npos)
            {
                int index = static_cast<int>(temp.find('1'));
                ops += abs(i - index);
                temp[index] = '0';
            }
            ans.push_back(ops);
        }
        return ans;
    }
};