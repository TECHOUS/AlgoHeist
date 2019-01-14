#include <iostream>
#include <string.h>

using namespace std;

void reverse(char str[]){

    int len = strlen(str);
    char ch;

    for(int i=0; i<(len/2); i++){

        // swap ith character with 'length-i-1'th character
        ch = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = ch;

    }

}

int main(){

    char str[20];

    cout<<"Enter a string = ";
    cin.getline(str, 20);

    cout <<"Reverse of "<<str <<" = ";
    reverse(str);
    cout <<str <<endl;

    return 0;
}
