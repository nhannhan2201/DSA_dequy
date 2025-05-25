#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
     int sum(ll n){
      if(n<10) return 1;
      else {
        return 1 + sum(n/10);
      }
     }
 int main(){
      ll n; cin >> n;
      cout << sum(n);
 }
