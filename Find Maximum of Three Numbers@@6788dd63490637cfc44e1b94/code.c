#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&x);
    scanf("%d",&x);
    if(x>y&&x>z){
        printf("%d",x);
    }
    else if(y>z&&y>x){
        printf("%d",y);

    }
    else{
        printf("%d",z);
    }
}