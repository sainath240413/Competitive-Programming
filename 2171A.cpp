#include<iostream>
using namespace std;
int solve(int n){
    if(n%2!=0) return 0;
    return n/4+1;
}
int main(){
    int testcases;
    cin>>testcases;
    int cow_legs=4,chicken_legs=2;
    for(int i=0;i<testcases;i++){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}