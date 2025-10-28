include <stdio.h>

int main() {
   
    int a,b;
    printf(" enter the value of two integer ");
    scanf("%d %d" , &a,&b);

    
    printf(" %d %d",~b,b);
    b=~b+1;

    while(b!=0){
        int count=a&b;
        a=a^b;
        b=count<<1;
    }
    
    printf(" result for substraction %d\n",a);

    return 0;
}
