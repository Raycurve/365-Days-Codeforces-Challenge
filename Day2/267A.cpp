//267A
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
    int n,ans=0;
    //cin>>n;
    ll a,b;
    cin>>a>>b;
    while(a!=0 && b!=0){
      ll m = min(a,b);
      ll M=max(a,b);
      ans+=M/m;
      a=M%m;
      b=m;
    }
    cout<<ans;

     
    
}