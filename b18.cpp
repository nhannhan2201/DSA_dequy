#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 const int MOD = 1e9+7;
 ll tongchan(ll n){
    if(n==0) return n;
    else if(n%2==0) return n%10 + tongchan(n/10);
    else return tongchan(n/10);
 }
 ll tongle(ll n){
    if(n==0) return n;
    else if (n%2==1) return n%10 + tongle(n/10);
    else return tongle(n/10);
 }
int main() {
    ll n; cin >> n;
  cout << tongchan(n) << endl;
  cout << tongle(n);
}
