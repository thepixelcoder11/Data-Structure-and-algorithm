#include <iostream>
using namespace std;

int createNumeberUsingDigits(int numberOfDigits)
{
    int num =0;
    for(int i=0; i<numberOfDigits; i++)
    {
        cout <<"Enter Digit: "<<endl;
        int digit;
        cin >> digit;
        num = num*10 + digit;
    }
    return num;
}
int main ()
{
     int numberOfDigits;
     cin >> numberOfDigits;
     int num = createNumeberUsingDigits(numberOfDigits);
    cout << "Number created by digits: "<< num << endl;
}