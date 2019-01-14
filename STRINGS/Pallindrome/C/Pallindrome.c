#include <stdio.h>
#include <string.h>

int isPallindrome(char str[]){

    int len = strlen(str);
    int i;

    for(i=0; i<(len/2); i++){
        // comparing ith character with "Length-i-1"th character
        if( str[i] != str[len-i-1] ){
            return 0;
        }
    }
    return 1;

}

void main(){

    char str[50];
    printf("Enter a string = ");
    scanf("%s", str);

    printf("%s is ", str);
    if( ! isPallindrome(str) ){
        printf("not ");
    }
    printf("Pallindrome\n");

}
