#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    // Outer Loop
    for(int row=0; row<n; row++)
    {
        // Inner loop

        for(int col =0; col<row+1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}