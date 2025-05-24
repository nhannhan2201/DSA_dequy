#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
  int gt(int n){
    if (n==1 || n==0) return 1;
    else return n*gt(n-1);
  }
int main(){
   int n; cin >> n;
   cout << gt(n);
}
