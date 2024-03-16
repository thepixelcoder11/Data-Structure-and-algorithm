#include<iostream>
using namespace std;
int main ()
{
    // Outer Loop 
    for(int row=0 ; row<5; row++)
    {
        // Inner Loop ---> 1 star, 3 space, 1 star 
        for(int col=0; col<5; col++)
        {
            if(row==0 || row==4)
            {
                cout << "* ";
            }
            else 
            if(col== 0 || col==4)
            {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }

        cout << endl; 
    }
}