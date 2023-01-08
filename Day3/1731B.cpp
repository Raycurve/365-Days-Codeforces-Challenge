//1731B

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
    ll m=1000000007;
    ll n,ans=0;
    cin>>n;
    cout<<((((n%m*(n+1)%m)%m)*((((4*n-1)%m)*337)%m)%m))%m;
    
     
    
}
// 1 2 
// 2 4
// 1 2 3
// 2 4 6
// 3 6 9
// 1 2 3 4 
// 2 4 6 8
// 3 6 9 12
// 4 8 12 16

// 46

// 1+2 +4+6 + 9+12 +16+20 +25+30

// 7 8-1
// 7+15 = 22 27-5
// 22+28 = 50  64-14
// 50+45 = 95  125-30

// 1+4+9...n^2 + 2(1 +3+6+10)
// n(n+1)(2n+1)/6 + n-1(n)(n+1)/6
// n(n+1)/6  [2n+1+2n-2]
// n(n+1)(4n-1)/6


// 2+6+12+20+30...
// 2(1+3+6+10+15...)
