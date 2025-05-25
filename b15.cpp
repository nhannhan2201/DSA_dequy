#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
     int first(ll n){
      if(n<10) return n;
      else  {
        int t=first (n/10);
        return t;
      }
     }
 int main(){
      ll n; cin >> n;
      cout << first(n);
 }
