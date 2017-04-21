#include <iostream>
#include <vector>

using namespace std;

vector<int>v;

bool visited[100];

bool escape(int cur) {
  if(cur == v.size()-1) return true;

  if(visited[cur]) return false;

  visited[cur]=true;
  
  return escape(v[cur]);
}

int main() {
  int n; cin>>n;
  v.resize(n);
  for(int i=0; i<n; i++) cin>>v[i];

  // recursive solution
  cout<<escape(0)<<endl;

  // iterartive solution
  int max_moves=2*n; // larger than the upperbound
  int cur=0;
  bool ok=0;
  while(max_moves != 0){
    max_moves--;
    cur=v[cur];
    if(cur==v.size()-1) {
      ok = 1;
      break;
    }
  }
  cout<<ok<<endl;
}

/*

you start at room zero, must reach the last room
each room points to another room
can't go back, will you escape?

5 (number of rooms)
2 3 1 4 1

room at index 0 has a door to room at index 2
room at index 1 has a door to room at index 3
room at index 2 has a door to room at index 1
room at index 3 has a door to room at index 4
room at index 4 has a door to room at index 1

this will create a cycle
4
2 0 1 3
0 1 2 3


*/