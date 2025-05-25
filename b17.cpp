#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  void traiphai(ll n){
      if(n<10) cout << n%10 << " ";
      else {
        traiphai(n/10);
        cout << n%10 << " ";
      }
  }
  void phaitrai(ll n){
    if(n<10) cout << n%10 << " ";
    else {
        cout << n%10 << " ";
        phaitrai(n/10);
    }
  }
int main() {
    long long n; cin >>n;
    traiphai(n);
    cout << endl;
    phaitrai(n);
    return 0;
}
