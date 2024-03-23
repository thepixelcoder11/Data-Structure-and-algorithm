#include<iostream>
using namespace std;
void PrintName(string name){
    for(int i=0; i<5; i++)
    {
        cout << name << endl;
    }
}

int main(){
    PrintName("Manan");
    return 0;
}