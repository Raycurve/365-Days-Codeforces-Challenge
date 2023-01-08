//706A
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
    //cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
void solve(){
    int x,y,a,b,n;
    long double ans=10000000000,v;
    cin>>x>>y;
    cin>>n;
    while(n--){
      cin>>a>>b>>v;
      long double diff = sqrt(pow(abs(a-x),2)+pow(abs(y-b),2));

      diff= diff/v;
      //cout<<f<<diff<<" "<<n<<endl;
      ans=min(ans,diff);

    }
    cout<<fixed<<setprecision(7)<<ans;
     
    
}