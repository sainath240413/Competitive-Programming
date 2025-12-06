#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>a(n);
    vector<long long>b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    long long current_max=0;
    long long current_min=0;
    for(int i=0; i<n; i++){
        long long red_max=current_max-a[i];
        long long red_min=current_min-a[i];
        long long blue_min=b[i]-current_min;
        long long blue_max=b[i]-current_max;
        current_max = max({red_max,red_min,blue_min,blue_max});
        current_min = min({red_max,red_min,blue_min,blue_max});
    }
    cout<<current_max<<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}