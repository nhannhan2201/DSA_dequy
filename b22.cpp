#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 const int MOD = 1e9+7;
  void intraiphai(int a[], int n){
    if(n==0) cout << a[n] << " ";
    else {
        intraiphai(a, n-1);
        cout << a[n] << " ";
    }
  }
  void inphaitrai( int a[], int n){
    if (n==0) cout << a[n] << " ";
    else {
        cout << a[n] << " ";
        inphaitrai(a, n-1);
    }
  }
int main() {
  int n; cin >> n;
  int a[n];
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  intraiphai(a,n-1);
  cout << endl;
  inphaitrai(a,n-1);
}
