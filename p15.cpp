#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    double h,m,s;
    cout<<"Enter h:" ;
    cin>>h;
    cout<<"Enter m:";
    cin>>m;
    cout<<"Enter s:";
    cin>>s;

    double T= h*3600+m*60+s;
    cout<<"Full seocnds : " <<T;
    return 0;
}
