#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
  int n;
  while(cin>>n){
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int k; cin>>k;

    sort(v.begin(), v.end());

    map<int,int> cnt;
    for(auto i:v) cnt[i]++;

    int a=1e9, b=0;

    // try choosing the first number and search for the second
    for(int i=0; i<n; i++){
      int x = v[i];
      int rem = k-x;
      // check that the remaining number exists
      if(binary_search(v.begin(), v.end(), rem))
        // if the two numbers are the same check cnt > 1
        if(x!=rem || cnt[x]>1)
          if(abs(x-rem) < abs(a-b)) a=x, b=rem;
    }

    printf("Peter should buy books whose prices are %d and %d.\n\n", a, b);
  }
}
