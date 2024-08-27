# Exp-10
**Experiment 10** <br>
<br>
**Aim:** <br>
To study and implement Pointer Operations (call by value and call by reference) <br>
<br>
**Theory:** <br>
There are two ways to call a variable to a function for various operations. <br>
| Call by Value  | Call by Reference |
| ------------- | ------------- |
| A method of passing arguments to a function where the actual value is passed.  | A method of passing arguments where the address of the variable is passed.  |
| Does not affect the original variable.  | Does affect the original variable.  |
| More memory is used because a copy of the actual value is made.  | Less memory is used because only the address is passed.  |
| Used when the function does not need to modify the original data.  | Used when the function needs to modify the original data or when passing large objects.  |
<br>

## Code - 
A.
```
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
```
B.
```
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
```
## Output - 

A. ![Screenshot 2024-08-27 143008](https://github.com/user-attachments/assets/5c8a340c-4776-451b-8c17-b4cc11ec3ad7)
B. ![Screenshot 2024-08-27 143133](https://github.com/user-attachments/assets/67bc0d44-22b2-4c1f-89d0-57299ebb9ff8)

## Conclusion - 
&#8594; We learnt about call by value and call by reference in C++. <br>
&#8594; We learnt the use case of each in C++. <br>
