#include <iostream>
#include <cmath>
using namespace std;
int  main()

{

    int age=25;
    bool isStudent=true;

    bool x =(age>18 && isStudent);
    bool y=(age<18 || isStudent);
    bool z=!(age>18 && isStudent);

    cout<<"x :" <<x <<"y: " <<y <<"z:" <<z;
    return 0;
}
