//Tarang - 23070123140
//Pointer operations, call by reference 
#include<iostream>
using namespace std;

void swap(int *x, int *y)  // Note the use of pointers
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap; 
}

int main()
{
    int a = 8, b = 5;
    swap(&a,&b);  // Passing addresses of a and b
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    return 0;
}
