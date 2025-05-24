#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  const int MOD=1e9+7;
 int tohop(int n, int k){
    if (k==0 || k==n) return 1;
    else return ((n-k+1) * tohop(n, k-1))/k;
 }
int main(){
  int n,k;
  cin >> n >> k;
  cout << tohop(n,k);
   return 0;
}
