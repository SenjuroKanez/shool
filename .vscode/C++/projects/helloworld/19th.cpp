//Write a program that swap two numbers using pointers.
#include <iostream>

using namespace std;

int main()
{
    int temp,  x = 1;
    
    int y = 2;
    
    int *p,*t; 
    
    p = &y;
    
    t = &x;

    p = &temp;
    t = p;
    t = &temp;
    cout<<p<<" "<<t;



    
} 