#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=n;i++){
        for(int k=a-i;k>1;k--){
            printf(" ");
        }
        for(int j=1;j<=a;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}