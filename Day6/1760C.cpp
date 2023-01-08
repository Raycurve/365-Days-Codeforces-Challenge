//1760C
#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ll long long int
#define vect vector<int>
using namespace std;
void solve();
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
void solve(){
    ll n,ans=0;
    cin>>n;
    ll arr[n],b[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        b[i]=arr[i];
    }
    sort(b,b+n);
    ll m = b[n-1];
    ll min = b[n-2];
    for(int i=0;i<n;i++){
      cout<<arr[i]-((arr[i]!=m)?m:min)<<" ";
    }

     
    
}