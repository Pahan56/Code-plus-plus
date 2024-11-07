#include <iostream>
using namespace std;
int main()

{
    int a,b;
    cout<<"first no: " ;
    cin>>a;

    cout<<"sec no : ";
    cin>>b;

    char op;
    cout<<"operation :";
    cin>>op;

    if(op=='+')
    {
        cout<<"Add two no : " <<a+b <<endl;

    }
    else if (op=='-')
    {
        cout<<"Subtract : " <<a-b <<endl;

    }

    else if (op=='*')
    {
        cout<<"multipy :" <<a*b <<endl;
    }
    else if (op=='/')
    {
        cout<<"division : " <<a/b <<endl;

    }
        else
        {
            cout<<"wrong operation " <<endl;
        }
        return 0;
}
