#include <stdio.h>

int main() {
    
    int a,b,temp;
    
    printf("enter the values of two numbers");
    scanf("%d %d",&a,&b);

    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }

    printf("HCF %d",a);
    return 0;
}
