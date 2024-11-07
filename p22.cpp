#include <iostream>
#include<cmath>
using namespace std;
int main()

{
    double r,h;
    cout<<"Input radius:";
    cin>>r;

    cout<<"Input Height:";
    cin>>h;

    double F=3.14;
    double volume =pow(h,h)*h*F;
    cout<<"Volume is : " <<volume ;
    return 0;
}
