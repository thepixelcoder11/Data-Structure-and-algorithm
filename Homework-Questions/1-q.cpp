#include<iostream>
using namespace std;

void KmtoMiles(int n)
{
    double conversion = 0.621371;
    double km;
    km = n*conversion;
    cout << "Km to miles for the following number is: "<< km << endl;
}

int main ()
{
    KmtoMiles(6);
}