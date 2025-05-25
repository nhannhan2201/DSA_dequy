#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
     void np(ll n){
      if(n/2==0) cout << n%2;
      else {
        np(n/2);
        cout << n%2;
      }
     }
 int main(){
  ll n; cin >> n;
  np(n);
}
