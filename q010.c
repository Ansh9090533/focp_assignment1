#include <stdio.h>

int main() {
    // your code here
    int x,count = 0,i ;
    printf("enter the number of students");
    scanf("%d",&x);
    
    int marks[x];
    for(i=0;i<x;i+=1){
        printf("enter the marks of a student %d\n",i+1);
        scanf("%d",&marks[i]);

    }
    for(i=0;i<x;i+=1){
        if(marks[i]==99){
            printf("students scored 99 is %d\n",i+1);
            count+=1;
        }
    }

    printf("the students who scored 99 are %d\n",count);
     


    return 0;
}
