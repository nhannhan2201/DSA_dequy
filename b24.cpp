#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 const int MOD = 1e9+7;
  bool check(int a[], int n){
    if(n==0) return true;
    else if(a[n]<=a[n-1]) return false;
    else return check(a,n-1);
  }
int main() {
 int n; cin >> n;
 int a[n];
 for (int i=0; i<n; i++){
    cin >> a[i];
 }
 if(check(a,n-1)) cout << "YES";
 else cout << "NO";
}
