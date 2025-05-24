#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
 long long tong (int n){
  if (n==1) return -n;
  else if(n%2==0) return n+tong(n-1);
  else return -n+tong(n-1);
 }
int main(){
   int n; cin >> n;
   cout << tong(n);
   return 0;
}
