#include <iostream>
#include <vector>

using namespace std;

vector<string>grid;
int n, m;

bool valid(int row, int col){
  return row < n && col < m;
}

bool escape(int row, int col){
  if(row == n-1 && col == m-1) return true;

  if(!valid(row, col)) return false;

  if(grid[row][col] == 'x') return false;

  return escape(row+1, col) ||
         escape(row, col+1);
}

int main() {
  cin>>n>>m;
  grid.resize(n);

  for(int i=0; i<n; i++)
    cin>>grid[i];

  cout<<escape(0,0)<<endl;
}


/*
can you escape the maze, can only move right and down
you start at 0, 0
end at bottom right corner

3 3
..x
x.x
...

3 3
.x.
.x.
.x.

3 3
.xx
.xx
...
*/







