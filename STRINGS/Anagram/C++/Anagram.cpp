#include <iostream>
#include <cstring>
#include <limits>

using namespace std;

char *sort(char *str){

    int len = strlen(str);
    char ch;

    for(int i=0; i<len; i++){
        for(int j=0; j<len-i-1; j++){

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
    cout<<"Enter max size of string = ";
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char *str1 = new char[n];
    cout<<"Enter string 1 = ";
    cin.getline(str1, n);

    char *str2 = new char[n];
    cout<<"Enter string 2 = ";
    cin.getline(str2, n);

    cout <<str1 <<" and "<<str2 <<" are ";
    sort(str1);
    sort(str2);
    // for 2 strings to be Anagrams, their length should be equal & should have same characters
    if( strlen(str1) != strlen(str2) || strcmp(str1, str2) != 0 ){
        cout<<"not ";
    }
    cout <<"anagram" <<endl;

    delete[] str1;
    delete[] str2;

    return 0;
}
