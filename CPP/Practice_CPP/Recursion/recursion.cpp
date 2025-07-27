#include<iostream>
using namespace std;
#include<vector>
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    // cout<<n<<" ";
    return fibonacci(n-1) + fibonacci(n-2);
}
int step_ladder(int n){
    if(n<0)//Base condition
        return 0;
    if(n==0)
        return 1;
    cout<<n<<" ";// Processing 

    return step_ladder(n-1)+step_ladder(n-2);

}
int steps(int n){
    if(n<0)
        return 0;
    cout<<n<<endl;
    return steps(n-1);

}
int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main(){
    int n,m,k;
    cin>>n;
    // cin>>m;
    // cin>>k;
    // cout<<factorial(n);
    // cout<<steps(n);
    // cout<<step_ladder(n,m,k);
    for(int i=0;i<=n;i++){
        cout<<fibonacci(i)<<" ";
    }
}