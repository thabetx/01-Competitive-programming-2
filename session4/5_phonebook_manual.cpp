#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n; cin>>n;

  string name, number;
  vector<pair<string,string>>v;

  for(int i=0; i<n; i++){
    cin>>name>>number;
    v.push_back( {name,number} );
  }

  int q; cin>>q;
  while(q--){
    cin>>name;
    bool found=0;
    for(auto i:v){
      if(i.first==name){
        found=1;
        cout<<i.second<<endl;
        break;
      }
    }
    if(!found){
      cout<<"doens't exist"<<endl;
    }
  }
}
