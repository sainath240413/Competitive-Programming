#include<iostream>
#include<vector>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int k=0;k<testcases;k++){
        int n;
        cin>>n;
        vector<vector<int>>grid;
        grid.resize(n,vector<int>(n));
        int ele=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=ele++;
            }
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n==2){
            cout<<grid[0][1]+grid[1][0]+grid[1][1]<<endl;
            continue;
        }
        if(n<=4) cout<<grid[n-1][n-1]+grid[n-1][n-2]+grid[n-1][n-3]+grid[n-2][n-2]<<endl;
        else cout<<grid[n-3][n-2]+grid[n-2][n-3]+grid[n-2][n-2]+grid[n-2][n-1]+grid[n-1][n-2]<<endl;
    }
}