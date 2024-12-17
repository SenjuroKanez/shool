#include <iostream>
using namespace std;

int main() {

  float num1 = 00.22, num2 = 9.9, num3= 9.00;

  
  float *ptr1, *ptr2, *ptr3;

  ptr1 = &num1;
  ptr2 = &num2;
  ptr3 = &num3;

  


 
  float sum = *ptr1 + *ptr2 + *ptr3;

  cout<<"Sum of variables:\n"<< sum;


  return 0;
}
