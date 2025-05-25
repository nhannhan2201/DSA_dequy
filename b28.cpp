#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 const int MOD = 1e9+7;
  
  int firstpos(int a[], int l, int r, int res, int x){
    if (l > r) return res;
    int m=(l+r)/2;
    if (a[m]==x){
      res=m;
      return firstpos(a, l , m-1 , res, x);
    }
    else if (a[m]>x)  return firstpos(a, l , m-1 , res, x);
    else return firstpos(a, m+1 , r , res, x); 
  }
   int lastpos(int a[], int l, int r, int res, int x){
    if (l > r) return res;
    int m=(l+r)/2;
    if (a[m]==x){
      res=m;
      return lastpos(a, m+1 , r , res, x);
    }
    else if (a[m]>x)  return lastpos(a, l , m-1 , res, x);
    else return lastpos(a, m+1 , r , res, x);
  }
  
int main() {
  int n; cin >> n;
  int a[n];
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  int x; cin >> x;
  if (lastpos(a,0,n-1,n,x)==n || firstpos(a,0,n-1,n,x) ==n ) cout << 0;
  else 
  cout << lastpos(a,0,n-1,n,x) - firstpos(a,0,n-1,n,x) + 1;
}
