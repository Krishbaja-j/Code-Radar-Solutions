#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=0; i<11;i++){
        printf("%d x %d = %d\n", x, i, x * i);

    }
    return 0;
}