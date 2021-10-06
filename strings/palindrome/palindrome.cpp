#include <iostream>
#include <string.h>

using namespace std;

int is_palindrome(char str[]){

    int Len = strlen(str);

    for(int i=0; i<(Len/2); i++){

        if( str[i] != str[Len-i-1] )
            return 0;

    }

    return 1;
}

int main(){

    char str[20];

    cout<<"Enter a string = ";
    cin.getline(str, 20);

    cout<<str <<" is ";
    if( ! is_palindrome(str) )
        cout<<"not ";
    cout<<"palindrome\n";

    return 0;
}
