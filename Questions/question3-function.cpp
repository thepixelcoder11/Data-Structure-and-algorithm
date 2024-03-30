#include<iostream>
using namespace std;

void printprime(int n, int i)
{
    if(n%i==0)
    {
        cout << "It is a prime number"<< endl;
    }
    else{
        cout << "it is not a prime numbbber"<<endl;
    }
}

int main ()
{
    printprime(17);
}