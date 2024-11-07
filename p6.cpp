#include <iostream>
using namespace std;
int main()

{
    int c,f;
    cout<<"Input Temperature in celcius:" ;
    cin>>c;
    cout<<"Ïnput temperature in farenhite:";
    cin>>f;

    double F=(c*9/5)+3;
    double C=(f-32)*5/9;

    cout<<"Temperature in Celcius :" << C <<endl;
    cout<<"Temperature In Farenhite :" <<F <<endl;
    return 0;

}
