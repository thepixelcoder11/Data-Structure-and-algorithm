#include<iostream>
using namespace std;

bool checkPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%2 == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
    bool isprime = checkPrime(i);
    {
        if(isprime)
        cout << i << " ";
    }
    }
    
}