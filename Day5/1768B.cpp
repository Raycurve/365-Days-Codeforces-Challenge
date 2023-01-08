//1768B
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
    int k,n,ans=0;
    cin>>n>>k;
    int arr[n],b[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        b[i]=arr[i];
    }
    sort(b,b+n);
    int j=0,l=0;
    while(1){
      if(l==n || j==n){
        break;
      }
      //cout<<arr[j]<<b[l]<<"y\n";
      if(arr[j]==b[l]){
       // cout<<"h";
        ans++;
        l++;
      }
      j++;

    }
    cout<<ceil((n-ans)*1.0/k) ;

    
     
    
}