//1709B
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
    ll n,m,ans=0;
    cin>>n>>m;
    ll arr[n],a[n]={0},b[n]={0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i!=0){
          if(arr[i]<arr[i-1]){
            a[i]=a[i-1]+(arr[i-1]-arr[i]);
          }
          else{
            a[i]=a[i-1];
          }
        }
    }
    for(int i=n-2;i>=0;i--){
      if(arr[i]<arr[i+1]){
        b[i]=b[i+1]+(arr[i+1]-arr[i]);
      }
      else{
        b[i]=b[i+1];
      }
    }

    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++)cout<<b[i]<<" ";
      



    while(m--){
      int x,y;
      cin>>x>>y;
      if(x>y){
        cout<<b[y-1]-b[x-1];
      }
      else{
        cout<<a[y-1]-a[x-1];
      }
      cout<<endl;

    }
     
    
}