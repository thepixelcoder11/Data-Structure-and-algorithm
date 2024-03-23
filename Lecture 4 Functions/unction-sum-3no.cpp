#include <iostream>
using namespace std;

void printsum(int a, int b, int c)
{
    int answer = a+b+c;
    cout << "Sum is: " << answer;
}

int main()
{
    printsum(1,2,7);
    return 0; 
}
