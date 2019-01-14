#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int main(){

    int n;
    printf("Enter max size of string = ");
    scanf("%d", &n);

    char *str = (char *) malloc(sizeof(char) * n);
    printf("Enter a string = ");
    scanf("%s", str);

    printf("%s is ", str);
    if( ! isPallindrome(str) ){
        printf("not ");
    }
    printf("Pallindrome\n");

    free(str);

    return 0;

}
