#include<stdio.h>

void fibonacciSeries(int n){
    if(n<=2) return 1;
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}

int main(){
    int n;
    scanf("%d",&n);
    if(n <=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    printf("%d",fibonacciSeries);

    return 0;
}