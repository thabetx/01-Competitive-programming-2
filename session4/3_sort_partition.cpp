#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n; cin>>n;
  vector<int>odd, even;
  for(int i=0, x; i<n; i++){
    cin>>x;
    if(x%2) odd.push_back(x);
    else even.push_back(x);
  }

  sort(even.begin(), even.end());

  // instead of sorting then reversing
  // can also use sort(odd.rbegin(), odd.rend());
  sort(odd.begin(), odd.end());
  reverse(odd.begin(), odd.end());
  
  for(int i=0; i<even.size(); i++) cout<<even[i]<<" ";
  for(int i=0; i<odd.size(); i++) cout<<odd[i]<<" ";
}
