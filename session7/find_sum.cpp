#include <iostream>
#include <vector>

using namespace std;

int n, target;
vector<int>v;

vector<int>ans;

void solve(int index, int sum){
  if(sum==target){
    for(auto i:ans) cout<<i<<" ";
    cout<<endl;
    return;
  }
  if(index==n) return;

  ans.push_back(v[index]);
  solve(index+1, sum+v[index]);
  ans.pop_back();

  solve(index+1, sum);
}

int main(){
  cin>>n>>target;
  v.resize(n);
  for(int i=0; i<n; i++) cin>>v[i];
  solve(0,0);
}