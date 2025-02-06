#include <stdio.h>


int main() {
    char x;
    scanf("%c",&x);
    if(x=='a' || x=='e'|| x=='i' || x=='u'|| x=='o'){
        printf("Vowel",x);
    }
    else if(x>='a' && x<='z' && x=='a' || x=='e'|| x=='i' || x=='u'|| x=='o'){
        printf("Consonant",x);
    }


    return 0;
}