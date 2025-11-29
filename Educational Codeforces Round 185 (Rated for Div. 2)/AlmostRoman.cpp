#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main(){
    //X->10, V-->5, I-->1
    int testcases;
    cin>>testcases;
    int j=0;
    while(testcases--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<vector<int>>query(q,vector<int>(3));
        for(int i=0;i<q;i++){// C_X, C_V, C_I
            for(int k=0;k<3;k++){
                cin>>query[i][k];
            }
        }
        while(j<q){
            int minval=0;
            for(int i=0;i<n;i++){
                if(s[i]=='X') minval+=10;
                else if(s[i]=='V') minval+=5;
                else if(s[i]=='I') minval+=1;
                else if(s[i]=='?'){
                    if(query[j][2]>0){
                        s[i]='I';
                        query[j][2]--;
                        if(s[i+1]=='X') minval-=1;
                        else minval+=1;
                    } 
                    else if(query[j][1]>0){
                        s[i]='V';
                        query[j][1]--;
                        minval+=5;
                    }
                    else if(query[j][0]>0){
                        s[i]='X';
                        query[j][0]--;
                        minval+=10;
                    }
                }
            }
            j++;
            cout<<minval<<endl;
        }
    }
}