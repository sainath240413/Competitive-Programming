#include<iostream>
#include<string>
using namespace std;
bool checkstatement(string statement){
    //increment=true  decrement=false
    if(statement=="X++" || statement=="++X") return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        string statement;
        cin>>statement;
        bool flag=checkstatement(statement);
        if(flag==true) x=x+1;
        else x=x-1;
    }
    cout<<x<<endl;
    return 0;
}