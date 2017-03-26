#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int>ls;
  ls.push_back(1);
  ls.push_back(2);
  ls.push_back(3);
  ls.push_front(0);

  list<int>::iterator it = ls.begin();

  while(it!=ls.end()){
    cout<<*it<<endl;
    it++;
  }
  
}
