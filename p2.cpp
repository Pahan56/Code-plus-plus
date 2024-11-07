#include <iostream>
using namespace std;
int main()
{
    string x,y;
    cout<<"Enter your city:";
    getline(cin,x);

    cout<<"Enter your country:";
    getline(cin,y);

    cout<<"Your city is: " <<x <<", and your country is :" <<y;
    return 0 ;
}
