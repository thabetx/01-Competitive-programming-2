#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int>ls={0,1,2,3};
  
  for(int i:ls){
    cout<<i<<endl;
  }
}
