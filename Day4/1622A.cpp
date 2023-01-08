//1622A

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
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[2]-a[0]==a[1]){
      cout<<"YES";
      return;
    }
    if(a[0]==a[1] && a[2]%2==0){
      cout<<"YES";
      return;
    }
    if(a[1]==a[2] && a[0]%2==0){
      cout<<"YES";
      return;
    }
    cout<<"NO";



     
    
}