#include <stdio.h>
int main(){
    int a;
    int b=1
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            b+=1;
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}