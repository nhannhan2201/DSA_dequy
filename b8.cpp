#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
 long long gcd(int a, int b){
     if (b==0) return a;
     else return gcd(b, a%b);
 }
 int main(){
  long long a,b;
  cin >> a >> b;
  cout << gcd(a,b) << " " << a/gcd(a,b) *b;
   return 0;
}
