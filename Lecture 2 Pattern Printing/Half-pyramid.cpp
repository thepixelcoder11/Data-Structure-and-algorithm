#include<iostream>
using namespace std;
int main ()
{
    // Outer Loop
    for(int row =0; row<5; row++)
    {
        // Inner Loop
        for(int col =0; col<row+1; col++)
        {
            cout<< "* ";
        }
        cout << endl;
    }
    
}