#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        string s;
        cin>>s;
        string t;
        cin>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}