#include<stdio.h>
int main(){
    int n,first=0,second=1,next,i;

    printf("enter the number of terms");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d\n",first);
        next=first+second;
        first=second;
        second=next;

    }
    return 0;

    }



