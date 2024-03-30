#include<iostream>
using namespace std;

void checkEvenOdd(int n)
{
    if(n%2==0)
    {
        cout << "The number is Even"<<endl;
    }
    else{
        cout << "The number is Odd"<< endl;
    }
}

int  main ()
{
    checkEvenOdd(14);
}