#include <iostream>
#include <map>

using namespace std;

int main(){
  int n; cin>>n;

  string name, number;
  map<string, string>mp;

  for(int i=0; i<n; i++){
    cin>>name>>number;
    mp[name]=number;
  }
  int q; cin>>q;

  while(q--){
    cin>>name;
    if(mp.find(name)!=mp.end()){
      cout<<mp[name]<<endl;
    }else{
      cout<<"doens't exist"<<endl;
    }
  }
}
