#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number";
    cin >> num;

    if(num > 0)
    {
        cout<< "Number is +ve";
    }

    else if(num < 0)
    {
        cout << "Number is -ve";
    }

    else
    {
        cout << "Number is 0";
    }
}