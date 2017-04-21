#include <iostream>
#include <vector>

using namespace std;

// assume all numbers are positive
// the vector is not empty
int maxv(vector<int> v) {
  if(v.empty()) return 0;
  return max(v[0], maxv(vector<int>(v.begin()+1, v.end())));
}

int main() {
  cout<<maxv({3, 6, 18, 6})<<endl;
}