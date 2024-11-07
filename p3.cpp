#include <iostream>
using namespace std;
int main()
{
    string x,y;
    cout<<"your name:";
    cin>>x;
    cin.ignore();
    cout<<"your country is:";
    getline(cin,y);

    cout<<"your name is :" <<x ;
    cout<<"your country is :" <<y ;
    return 0;
}
