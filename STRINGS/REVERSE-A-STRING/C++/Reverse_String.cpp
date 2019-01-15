#include <iostream>
#include <cstring>
#include <limits>

using namespace std;

void reverse(char *str){

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

    int n;
    cout<<"Enter max size of string = ";
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char *str = new char[n];
    cout<<"Enter a string = ";
    cin.getline(str, n);

    cout <<"Reverse of "<<str <<" = ";
    reverse(str);
    cout <<str <<endl;

    delete[] str;

    return 0;
}
