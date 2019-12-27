#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//method to reverse a string in c language
void string_reversed(char str[1000],int len){
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    puts(str);
}
int main()
{
    char str[1000];
    fgets(str,1000,stdin);
    int length = strlen(str);
    string_reversed(str,length); //passed string and length of string to this function
    return 0;
}
