
class Solution {
public:
    int reverse(int x) {
        long long store = 0;
        while(x!=0){
            long int rem = x % 10;
            store = store*10 + rem;
            x = x/10;
        }
        if(store> INT_MAX || store < INT_MIN){
            return 0;
        }
        return static_cast<int>(store);
    }
};