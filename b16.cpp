#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  int lon(ll n){
    int res=-1;
     if(n<10){
        res= n%10;
     }
     else {
        res=lon(n/10);
        if(n%10>res) res=n%10;
     }
     return res;
  }
  int nho(ll n){
     int res=-1;
     if(n<10){
        res= n%10;
     }
     else {
        res=nho(n/10);
        if (res>n%10) res = n%10;
     }
     return res;
  }
int main() {
    ll n; cin >> n;
    cout << lon(n) << " " << nho(n);
    return 0;
}
