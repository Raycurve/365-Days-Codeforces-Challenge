//1779A
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
    int n,f=0;
    cin>>n;
    string s;
    cin>>s;
    size_t found = s.find("LR"),fo,fc=s.find("RL");
    if(fc!=string::npos){
          cout<<0;
          return;
    }
    
    if(found==string::npos){
      cout<<-1;
      return;
    }

    while(1){
      if(found != string::npos){
        if(found!=0 && found!=n-1){
          cout<<found+1;
          return;
        }
        if(found==0){
          fo= s.find("L",found+1);
          if(fo!=string::npos){
            f=0;
            found = s.find("LR",found+1);
            continue;
          }
          else{
            cout<<1;
            return;
          }

        }
        else if(found == n-1){
            if(s.substr(0,n-2).find("R")!=string::npos){
              cout<<n-1;
              return;
            }
            else{
              cout<<-1;
              return;
            }
            
            
        }
      }
    }
    cout<<-1;

     
    
}