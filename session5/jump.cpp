// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3183
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

bool check(int jump) {
  int cur=0;
  for(auto i:v) {
    int diff=i-cur;
    if(diff>jump) return false;
    if(diff==jump) jump--;
    cur=i;
  }
  return true;
}

int main() {
  int T; cin>>T;
  for(int t=1; t<=T; t++) {
    int n; cin>>n;
    v.resize(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int l=0, r=1000000000;
    // binary search for the minimum viable jump
    while(l<r){
      int m = l + (r-l)/2;
      if(check(m)) r=m;
      else l=m+1;
    }
    printf("Case %d: %d\n", t,l);
  }
}
