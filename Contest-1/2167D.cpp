#include<iostream>
#include<vector>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int size;
        cin>>size;
        vector<long long>v(size);
        for(int i=0;i<size;i++) cin>>v[i];
        long long g=v[0];
        for(int i=0;i<size;i++) g=gcd(g,v[i]);
        long long ans=-1;
        for(long long i=2;i<=1000000;i++){
            if(gcd(i,g)==1){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}