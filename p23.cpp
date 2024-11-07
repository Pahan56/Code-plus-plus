#include <iostream>
#include <cmath>
using namespace std;
int main()

{

    double w,h;

    cout<<"Input your weight:";
    cin>>w;
    cout<<"Input your height:" ;
    cin>>h;
    double x=h*h;
    double BMI = w/x;
    cout<<"BMI is "<<BMI <<endl;

    if (BMI <18.5)
    {
        cout<<"Underweight";
    }
    else if( BMI <25)
    {
        cout<<"normal";
    }
    else if( BMI <30)
    {
        cout<<"Overweight";
    }
    else if (BMI >30 )
    {
        cout<<"Obese";

    }
    return 0;
}
