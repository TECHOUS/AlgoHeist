#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sort(char *str){

    int len = strlen(str);
    char ch;
    int i, j;

    for(i=0; i<len; i++){
        for(j=0; j<len-i-1; j++){

            if( str[j] > str[j+1] ){
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
}

int main(){

    int n;
    printf("Enter max size of string = ");
    scanf("%d", &n);

    char *str1 = (char *) malloc(sizeof(char) * n);
    printf("Enter string 1 = ");
    scanf("%s", str1);

    char *str2 = (char *) malloc(sizeof(char) * n);
    printf("Enter string 2 = ");
    scanf("%s", str2);

    printf("%s and %s are ", str1, str2);
    sort(str1);
    sort(str2);
    // for 2 strings to be Anagrams, their length should be equal & should have same characters
    if( strlen(str1) != strlen(str2) || strcmp(str1, str2) != 0 ){
        printf("not ");
    }
    printf("anagram\n");

    free(str1);
    free(str2);

    return 0;
}
