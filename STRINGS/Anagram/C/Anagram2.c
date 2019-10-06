#include<stdio.h>
#include<string.h>
long long int max=1e6 +5;
int main()
{
	//Taking inputs of both the strings
	char str1[max],str2[max];
	printf("Enter two space separated strings: ");
	scanf("%s%s",str1,str2);
	
	long long int i,len1,len2,count=0;
	len1=strlen(str1);
	len2=strlen(str2);

	//We define an array which has size equal to the total number of ASCII characters and take every element as 0
	long long int ascii[256]={0};

	//Two strings are anagrams if they have the same length and the same characters
	if(len1==len2)
	{
		//We add 1 to the element corresponding to each character of str1
		for(i=0;i<len1;i++)
		{
			ascii[str1[i]]++;
		}

		//We subtract 1 from the element corresponding to each character of str2
		for(i=0;i<len2;i++)
                {       
                        ascii[str1[i]]--;
                }
		
		//For str1 and str2 to be anagrams they need to have same characters i.e. each element of the ascii array should be 0
		for(i=0;i<256;i++)
		{
			if(ascii[i]==0)
			count++;
		}
		if(count==256)
			printf("The entered strings %s and %s are Anagrams\n",str1,str2);
		else
			printf("The entered strings %s and %s are not Anagrams\n",str1,str2);
	}
	else
		printf("The entered strings %s and %s are not Anagrams\n",str1,str2);
	return 0;
}


