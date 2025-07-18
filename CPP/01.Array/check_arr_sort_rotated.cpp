class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        bool allEqual = true;
        for(int i=0;i<n;i++){
            if (nums[i] != nums[0]) allEqual = false;
            if(nums[i]>nums[(i+1)%n]){
                cnt++;
            }
        }
        if(allEqual) return true;
        return cnt==1;
    }
};
