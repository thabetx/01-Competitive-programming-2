#include <iostream>
#include <algorithm>
using namespace std;

int n;
string s;

string dec_to_bin(int x){
  if(x==0) return string(n, '0');

  string s="";
  while(x>0) s+=(x%2)+'0', x/=2;

  if(s.size()<n) s+=string(n-s.size(), '0');

  reverse(s.begin(), s.end());
  return s;
}

string to_lucky(string s){
  for(auto &i:s)
    if(i=='0') i='7';
    else i='4';
  return s;
}

int main(){
  cin>>n;
  int num = pow(2, n);
  for(int i=0; i<num; i++)
    cout<<to_lucky(dec_to_bin(i))<<endl; 
}
