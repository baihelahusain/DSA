Class Solution{
    public:
        bool isSorted(vector<int>& nums){
                    //your code goes here
                    vector<int>check = nums;
                    sort(check.begin(),check.end());

                    if(nums == check)//O(nlogn)
                        return 1;
                    return 0;
        }
    };