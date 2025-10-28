q4> Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management.
 
// arthamatic logic


#include <stdio.h>

int main() {
    // your code here
    int a,b;
    printf("enter the values of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);

    a=b+a;
    b=a-b;
    a=a-b;

    printf(" a : %d\n",a);
    printf(" b : %d\n",b);

    return 0;
}

//  bit wise operator logic


#include <stdio.h>

int main() {
    // your code here
    int a,b;
    printf("enter the values of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);

    a=b^a;
    b=a^b;
    a=a^b;

    printf(" a : %d\n",a);
    printf(" b : %d\n",b);

    return 0;
}

// temeprory variable logic

#include <stdio.h>

int main(){
  int a,b,temp;
printf("enter the values of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);

temp=a;
a=b;
b=temp;

printf(" a : %d\n",a);
printf(" b : %d\n",b);

return 0;
  
}
