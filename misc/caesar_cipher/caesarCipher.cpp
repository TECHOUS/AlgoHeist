#include <bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cout << "Input string : ";
	cin >> input;
	
	int key;
	cout << "Input key : ";
	cin >> key;
	
	for(int i=0; i<input.length(); i++){
		int ascii = input[i];
		
		// check if the char is in lowercase
		if(ascii >= 97 and ascii <= 122){
			ascii = ascii+key;
			if(ascii > 122){
				ascii = (ascii % 122) + 96;
			}
			
			char output = ascii; // convert ascii to char
			cout << output;
			
			
		//check if the char is in uppercase
		} else if(ascii >= 65 and ascii <= 90){
			ascii = ascii+key;
			if(ascii > 90){
				ascii = (ascii % 90) + 64;
			}
			
			char output = ascii; // convert ascii to char
			cout << output;
		
		
		// if the char is not alphabet, do nothing
		} else {
			cout << input[i];
		}
	}
	
	// List char to ascii number
	// a 97 --- z 122
	// A 65 --- Z 90
} 
