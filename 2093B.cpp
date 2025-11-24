#include<iostream>
#include<string>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        string s;
        cin>>s;
        int size=s.length();
        int ans=0;
        bool flag=0;
        for(int i=size-1;i>=0;i--){
            if(s[i]=='0' && flag==0) ans++;
            else if(s[i]!='0' && flag==false) flag=true;
            else if(s[i]!='0' && flag==true) ans++;
        }
        cout<<ans<<endl;
        
    }
}