#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 const int MOD = 1e9+7;
  
  bool binary(int a[], int l, int r, int x){
    if (l>r) return false;
    int m=(l+r)/2;
    if (a[m]==x) return true;
    else if(a[m]>x) return binary(a , m+1, r , x);
    else return binary(a, l, m-1, x);
  }
int main() {
  int n; cin >> n;
  int a[n];
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
 int x; cin >>x;
if (binary(a, 0, n-1, x)) cout << 1;
else cout << 0;
}
