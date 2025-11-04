#include <stdio.h>

int main() {
    // your code here
    int x,i;
    printf("enter your number");
    scanf("%d",&x);

    int scores[x],even_array[x],even_count=0,odd_count=0,odd_array[x];

    for(i=0;i<x;i+=1){
        printf("enter your scores %d :",i+1);
        scanf("%d",&scores[i]);
    }
    
    for (i = 0; i < x; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }
    for(i=0;i<even_count;i++){
        printf(" even number %d\n",even_array[i]);
    }
    for(i=0;i<odd_count;i++){
        printf(" odd number%d\n",odd_array[i]);
    }

    printf("even numbers present in the array are %d\n",even_count);
    printf("odd numbers present in the array are %d\n",odd_count);
    
    }
   
