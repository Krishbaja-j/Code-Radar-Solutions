#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("*");
        }
        n=n+3;
        printf("\n");
    }
}