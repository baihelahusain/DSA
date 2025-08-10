class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long X = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            X ^= nums[i];
        }
        int rightMost = X & (-X);
        int b1 = 0, b2 = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] & rightMost) {
                b1 ^= nums[i];
            } else {
                b2 ^= nums[i];
            }
        }
        return {b1, b2};
    }
};
