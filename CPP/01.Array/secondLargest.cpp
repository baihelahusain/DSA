class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int maxi = INT_MIN;
        int ans = INT_MIN;
        for(int num: nums){
           if(num > maxi){
                ans = maxi;
                maxi = num;
           }
           else if(num>ans && num<maxi){
                ans = num;
           }
        }        
        return (ans == INT_MIN)? -1:ans;
      
    }
}
