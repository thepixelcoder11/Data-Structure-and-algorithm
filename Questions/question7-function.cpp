#include <iostream>
using namespace std;

bool primeNumber(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%2 == 0)
        {
            return false;
        }
        return true;
    }
}

int main ()
{
    bool prime = primeNumber(1);
    {
        if(prime)
        {
            cout << "its a prime number"<<endl;
        }
        else 
        {
            cout <<"its not a prime number"<<endl;
        }
    } 
}