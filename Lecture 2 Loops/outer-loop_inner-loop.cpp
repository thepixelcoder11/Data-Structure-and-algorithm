#include<iostream>
using namespace std;
int main()
{
    for(int i=0 ; i<4 ; i++)
    {
        cout << "Outer Loop" << endl;

        for(int j =0; j<3; j++)
        {
            cout << " Inner loop" << endl;
        }

        cout << endl;
    }
}