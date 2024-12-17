//Write a function to add 10 in each element of an array using pointers.
#include <iostream>

using namespace std;

int main ()
{
    int a[5] = {0, 1, 2, 3, 4}; 
   
    int *p = a; 
   
    for (int i = 0; i < 5; i++) 
    {
        cout << *(p + i) + 10 << endl;  
    }
   
    return 0; 
}
