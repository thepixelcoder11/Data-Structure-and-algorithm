/*
Pattern
1
23
345
4567
*/

#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    for(int row=0 ; row<n; row++)
    {
        int value =row;

        for(int col=0; col<row; col++)
        {
            cout << value= value+1 ;
        }

        cout << endl;
    }
}