#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("Leap Year");
            }
            printf("Not a Leap Year");
        }
        printf("Leap Year");
    }
    
    return 0;
}
