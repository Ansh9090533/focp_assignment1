#include <stdio.h>

int main() {
    // your code here
    float x,y;
    printf("enter the two numbers");
    int check=scanf("%f %f",&x,&y);

    if(check!=2){
        printf(" please enter the valid input ");
        return 0;
    }

    if(x>0&&y>0){
        printf(" it is in 1st quadrant ");
    }
    else if(x<0&&y>0){
        printf(" it is in 2nd quadrant ");
    }
    else if(x<0&&y<0){
        printf(" it is in 3rd quadrant ");
    }
    else if(x>0&&y<0)
    {
        printf(" it is in 4th quadrant ");
    }
    else if (x==0){
        printf("it lies on y axis ");
    
    }
    else {
        printf("it lies on x axis");
    }
    return 0;
}

