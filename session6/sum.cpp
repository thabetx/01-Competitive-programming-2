#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int>& v) {
  if (v.empty()) return 0;
  int x = v.back();
  v.pop_back();
  return x+sum(v);
}

vector<int> v2;

int sum2(int i){
  if (i==v2.size()) return 0;
  return v2[i] + sum2(i+1);
}

int main() {
  vector<int> v = {3, 4, 5};
  cout<<sum(v)<<endl;
  v2 = {4, 5, 6};
  cout<<sum2(0)<<endl;
}