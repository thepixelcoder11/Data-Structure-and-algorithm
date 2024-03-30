//  sum of all numbers upto 1 to n

#include<iostream>
using namespace std;

void sumofNumber (int n)
{
    int sum = 0 ;
    for(int i=1; i<=n; i++)
    {
        sum = sum+i;
        
    }
    cout << "final sum is: "<< sum << endl;
}

int main ()
{
    sumofNumber(8);
}