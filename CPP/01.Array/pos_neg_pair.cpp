class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        for (int num : nums) {
            if (num > 0) 
                pos.push_back(num);
            else 
                neg.push_back(num);
        }

        vector<int> result;
        int n = pos.size();

        for (int i = 0; i < n; i++) {
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }

        return result;
    }
};
