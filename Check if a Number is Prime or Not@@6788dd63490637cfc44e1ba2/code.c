#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x%x==0 && x%1==0 && x%4!=0 && x%3!=0){
        printf("Prime",x);
    }
    else{
        printf("Not Prime",x);
    }
}