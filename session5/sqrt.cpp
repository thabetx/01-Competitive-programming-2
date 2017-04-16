#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double x; cin>>x;
  cout<<fixed<<setprecision(10);

  // in most cases we can choose better right
  // but being generous with the range might save you from a wrong answer
  // the time will be slightly worse
  // but the overhead can be ignored as the range will rapidly converge
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