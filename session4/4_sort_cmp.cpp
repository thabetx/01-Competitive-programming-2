#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool cmp(int first, int second){
  bool f_odd=first%2, f_even=(first%2)==0;
  bool s_odd=second%2, s_even=(second%2)==0;

  if(f_even && s_odd) return true;
  if(f_odd && s_even) return false;

  // even even
  if(f_even && s_even){
    if(first<=second)return true;
    else return false;
  }

  // odd odd
  if(first>=second)return true;
  else return false;
}

int main(){
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0; i<n; i++) cin>>v[i];
  sort(v.begin(), v.end(), cmp);
  for(auto i:v) cout<<i<<" ";
}
