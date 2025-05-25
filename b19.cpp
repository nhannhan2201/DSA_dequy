#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 const int MOD = 1e9+7;
  bool sochan(ll n){
   if (n<10){
    if (n%2==0) return true;
    else return false;
   } 
   else {
    if (n%2==1) return false;
    else return sochan(n/10);
   }
  }
int main() {
   ll n; cin >> n;
   if(sochan(n)) cout << "YES";
   else cout <<"NO";
}
