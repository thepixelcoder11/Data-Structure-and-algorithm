#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    
    // Outer Loop
    for(int row=0; row<n; row++)
    {
        // Inner Loop
        for(int col=0; col<n-row; col++)
        {
            cout << col+1 << " ";
        }

        cout << endl;
    }
}