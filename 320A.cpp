#include<iostream>
#include<string>
using namespace std;
bool check(string n){
    if(n=="1" || n=="14" || n=="144") return true;
    if(n[0]!='1') return false;
    if(n.substr(0,3)=="144") return check(n.substr(3));
    if(n.substr(0,2)=="14") return check(n.substr(2));
    return check(n.substr(1));
}
int main(){
    int n;
    cin>>n;
    string s=to_string(n);
    int ans=check(s);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}