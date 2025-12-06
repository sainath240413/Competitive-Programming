#include<iostream>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int n,k;
        cin>>n;cin>>k;
        string s;
        cin>>s;
        int sleep=0;
        int last=1;
        for(int i=1;i<=n;i++){
            if(s[i-1]=='1'){
                last=i+k+1;
            }
            else if(i>=last){
                sleep++;
            }
        }
        cout<<sleep<<endl;
    }
}