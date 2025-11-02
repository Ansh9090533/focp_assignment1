#include <stdio.h>

int main() {
    
    int score[]={45,46,89,99,100};
    int n=5;
    int found=-1;

    for(int i=0;i<n;i++){
        if(score[i]==99){
        found=i;
        break;
        }
    }

    if(found!=-1){
        printf("First occurrence of 99 is at index %d",found);
    }
    else
    {
        printf("99 is not in the index");
    }

    return 0;
}
