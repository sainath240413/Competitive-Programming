#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int even=0,odd=0;
        int size;
        cin>>size;
        vector<int>v(size);
        for(int i=0;i<size;i++) {
            cin>>v[i];
            if(v[i]%2==0) even++;
            else odd++;
        }
        if(odd==size || even==size){
            for(int i=0;i<size;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            sort(v.begin(),v.end());
            for(int i=0;i<size;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}