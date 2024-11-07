#include <iostream>
#include <cmath>
using namespace std;
int main()

{
  float a,b;
  cout<<"1st:";
  cin>>a;
  cout<<"2nd :";
  cin>>b;

  cout<< "1st no raised to 2nd no :" <<pow(b,a) <<endl;
  cout<<"square root of 1st no is:" <<sqrt(a) <<endl;
  cout<<"Square root of 2nd no is: " <<sqrt(b) <<endl;
  cout<<"Max no is:" <<max(a,b) <<endl;
  cout<<"Min no is :" <<min(a,b) <<endl;
  cout<<"round no of 1st no :"<<round (a) <<endl;
  cout<<"round no of 2nd no:" <<round (b)<<endl;
  return 0;

}
