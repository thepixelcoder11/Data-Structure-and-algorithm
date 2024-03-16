#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of row";
cout <<endl;
    cin >> row ;
    cout<< "Enter the number of col";
    cin >> col;

   // For the outer loop 

   for(int i=0; i<row; i++)
   {
    // For the Inner Loop 
    for(int j=0; j<col; j++)
    {
        if(i ==0 || i==row-1)
        {
            cout << "* ";
        }
        else
        if(j==0|| j==col-1)
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