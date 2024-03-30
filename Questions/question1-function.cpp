// find maximum of 3 numbber 

#include <iostream>
using namespace std;

void printMaximum (int num1, int num2,int num3)
{
    if(num1> num2 && num1>num3)
    {
        cout << "Maxximum no is: "<<num1<<endl;
    }
    else if(num2>num1 && num2> num3)
    {
        cout << "Maxximum no is: "<<num2 <<endl;
    }
    else{
        cout << "Maxximum no is: "<<num3<<endl;
    }
}

int main (){
    printMaximum(2,80,10);

}



#include <iostream>
using namespace std;

void printMaximation(int n1, int n2, int n3)
{
    // max is predefine function
    int ans1 = max(n1, n2);
    int finalAns = max(ans1,n3);
    cout << "Final ans is: "<< finalAns << endl;
}

int main ()
{
    printMaximation(3,3,7);
}