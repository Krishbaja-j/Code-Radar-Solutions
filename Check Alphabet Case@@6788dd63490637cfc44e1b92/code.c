#include <stdio.h>


int main() {
    char x;
    if(x>='A' && x<='Z'){
        printf("Uppercase",x);
    }
    else if(x>='a' && x<='z'){
        printf("Lowercase",x);
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}