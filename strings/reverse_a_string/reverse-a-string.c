//reverse a string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[1000];
    fgets(str,1000,stdin);
    int len = strlen(str);
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    puts(str);
}