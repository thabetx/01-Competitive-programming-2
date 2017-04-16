#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double x; cin>>x;
  cout<<fixed<<setprecision(10);

  double left=0, right=x, mid;

  for(int i=0; i<300; i++){
    mid=(left+right)/2;
    if(mid*mid>x) right=mid;
    else left=mid;
  }

  cout<<left<<endl;
  cout<<left*left<<endl;
  cout<<x-(left*left)<<endl;
}