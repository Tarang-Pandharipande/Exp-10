//Tarang - 23070123140
//Pointer operations, call by value
#include<iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp; 

    cout << "Value of a is: " << x << endl;
    cout << "Value of b is: " << y << endl;
}

int main()
{
    int a = 5, b = 2;
    swap(a, b); 

    return 0;
}
