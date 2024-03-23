// Function to find the factorial of the number
#include<iostream>
using namespace std;

void factorial(int num)
{
    int fact =1 ;
    fact = num* fact(num -1);
    cout << "factorial of the number is: "<< fact <<endl;
}

int main ()
{
    factorial(4);
}