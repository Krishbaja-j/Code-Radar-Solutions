#include<stdio.h>
#include<stdbool.h>
void primeNum(int num){
    bool isPrime = true;
    for(int i=2;i<num;i++){
      int a = num%i;
      if(a==0){
          isPrime = false;
          break;
      }
    }
    if(isPrime){
      printf("1");
    }
    else{
      printf("0");
    }}
    
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}