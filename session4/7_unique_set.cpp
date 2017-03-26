#include <iostream>
#include <set>

using namespace std;

int main(){
  int n; cin>>n;

  set<int>st;
  
  for(int i=0, x; i<n; i++){
    cin>>x;
    st.insert(x);
  }

  for(auto i:st){
    cout<<i<<" ";
  }
}
