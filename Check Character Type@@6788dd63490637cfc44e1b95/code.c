#include <stdio.h>


int main() {
    char x;
    scanf("%c",&x);
    if(x=='a','e','i','u','o'){
        printf("Vowel",x);
    }
    else if(x>='a' && x<='z' && x=!'a','e','i','o','u'){
        printf("Consonant",x);
    }


    return 0;
}