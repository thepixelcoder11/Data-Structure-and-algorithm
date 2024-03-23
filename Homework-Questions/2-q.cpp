#include<iostream>
using namespace std;
void AreaofCircle(int r)
{
    double area  = 3.14*r*r ;
    cout << "Area of the circle is: "<< area<< endl;
}

int main ()
{
    AreaofCircle(8);
}