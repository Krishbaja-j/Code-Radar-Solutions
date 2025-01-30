#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if(x>=90){
        printf("A");
    }
    else if(90>x && x>=80){
        printf("B");
    }
    else if(x>=70 && x<80){
        printf("C");
    }
    else if(x>=60 && x<70){
        printf("D");
    }
    else{
        printf("F");
    }
}