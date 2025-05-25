#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
     void tlp(ll n){
       if (n==0) return;
       else {
        tlp(n/16);
        int r=n%16;
        if(r<10) cout << r;
        else cout << char(r+55);
       }
     }
 int main(){
  ll n; cin >> n;
   if (n==0) cout << n;
   else tlp(n);
}
