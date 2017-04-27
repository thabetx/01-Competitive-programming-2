#include <iostream>
using namespace std;

int n;

void lucky(string s){
  if(s.size()==n){
    cout<<s<<endl;
    return;
  }
  lucky(s+'4');
  lucky(s+'7');

}

int main(){
  cin>>n;
  lucky("");
}
