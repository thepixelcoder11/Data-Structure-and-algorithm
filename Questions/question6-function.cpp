// sum of all even no upto 1 to n

#include <iostream>
using namespace std;

void sumofEvenNumber (int n)
{
    int sum =0;
    for(int i=0; i<n; i=i+2)
    {
        sum = sum+i ;
    }
    cout << "sum of all even number is: "<< sum << endl;
}

int main ()
{
    sumofEvenNumber(10);
}