#include <iostream>
using namespace std;
int main()
{
    string a;
    cout<<"name : " ;
    getline(cin,a);

    a[4]='h';
    cout<<"new name " <<a ;
    return 0;
}
