// Finding pattern using Rabin Karp algorithm with O(n) and in worst case O(nm)
#include <iostream>
#include <string.h>
#include<cmath>

using namespace std;

void checking(char X[], char Y[])
{
	int m = strlen(Y);
	int n = strlen(X);
	int p = 0; // hash value for pattern
	int t = 0; // hash value for txt
	int h = 1;

	for (int i = 0; i < m - 1; i++)
		h = (h * 256) % 101;
	// Calculating hash value of pattern and the text(staring index)
	for (int i = 0; i < m; i++)
	{
		p = (256 * p + Y[i]) % 101; // This is the hashing function which i m using
        t = (256 * t + X[i]) % 101; // (256 because we have 256 characters with ascii code and 101 is used as a prime number to cut short the hash code exceeding range of integers.)
	}

	// Slide the pattern over text one by one
	for (int i = 0; i <= n - m; i++)
	{
        // compare the hash code of text and pattern and if they match then compare the ascii code one by one
		if ( p == t )
		{
            int j;
			for (j = 0; j < m; j++)
			{
				if (X[i+j] != Y[j])
				{
				break;
				}		
			}
			if (j == m)
				cout<<"Pattern found at index "<< i<<endl;
		}
		// remove leading digit, add trailing digit to get the hash value of the subtext.
		if ( i < n-m )
		{
			t = (256*(t - X[i]*h) + X[i+m])%101;

			// We might get negative value of t, converting it to positive
			if (t < 0)
			t = (t + 101);
		}
	}
}



int main(){
char X[]="abcabcabc jnjnhf abcabcabc";
char Y[]="abcabc";
checking(X,Y);
return 0;
}