#include <iostream>
#include <vector>

using namespace std;

vector<string>grid;
int n, m;

bool valid(int row, int col){
  return row >= 0 && row < n && col >= 0 && col < m;
}

bool visited[100][100];

int chain(int row, int col, char target){
  if(!valid(row, col)) return 0;
  if(grid[row][col] != target) return 0;

  if(visited[row][col]) return 0;
  visited[row][col] = 1;

  return 1 + chain(row+1, col, target) +
             chain(row-1, col, target) + 
             chain(row, col+1, target) +
             chain(row, col-1, target);
}

int main() {
  cin>>n>>m;
  grid.resize(n);
  
  for(int i=0; i<n; i++)
    cin>>grid[i];

  int longest_chain = 0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      longest_chain = max(longest_chain,
                          chain(i,j,grid[i][j]));
    }
  }
  cout<<longest_chain<<endl;

}

/*
find the largest contiguous(up left right down) group of characters

3 4
AAAA
XAXX
AAAA

answer is 9 As

3 3
AAA
BBB
CCB

answer is four Bs


*/