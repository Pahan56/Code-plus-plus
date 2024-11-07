#include <iostream>
#include <cmath>
using namespace std;
int main()

{

    double r,h;
    cout<<"Radius:" ;
    cin>>r;
    cout<<"Height:";
    cin>>h;
    double F=3.14;
    double area= 2*F*(r+h);
    double volume =F*r*r*h;
    cout<<"Area is :" <<area <<'\n';
    cout<<"Volume is :" <<volume ;
    return 0;
}
