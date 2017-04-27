#include <iostream>
using namespace std;

int n;
string s;

void lucky(){
  if(s.size()==n){
    cout<<s<<endl;
    return;
  }

  s.push_back('4');
  lucky();
  s.pop_back();

  s.push_back('7');
  lucky();
  s.pop_back();

}

int main(){
  cin>>n;
  lucky();
}
