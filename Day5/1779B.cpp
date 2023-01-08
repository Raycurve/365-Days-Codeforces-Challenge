//1779B
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
    cin>>n;
    if(n==3)cout<<"NO";
    else{
      cout<<"YES"<<endl;
      if(n%2==0){
        for(int i=0;i<n;i++){
          (i%2)?cout<<69<<" ":cout<<-69<<" ";
        }
        return;
      }
      for(int i=0;i<n;i++){
        int a=-(max(0,(n-3)/2))*10;
        !(i%2)?cout<<a<<" ":cout<<10-a<<" ";
      }
    }
     
    
}