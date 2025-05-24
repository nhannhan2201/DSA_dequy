#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
   long long luythua(int a, int b){
    if(b==0) return 1;
     long long half = luythua (a, b/2);
     long long tich = (half*half)%MOD;
     if(b%2==1) tich=(tich*a)%MOD;
     return tich;
   }
 int main(){
  int a,b;
  cin >> a >> b;
  cout << luythua (a,b);
}
