#include <stddef.h>

#ifndef NB_ALPHABETS
#define NB_ALPHABETS 2
#endif //NB_ALPHABETS

#ifndef ALPHAS
#define ALPHAS {'A', 'a'}
#endif //ALPHAS

#ifndef OMEGAS
#define OMEGAS {'Z', 'z'}
#endif //OMEGAS

#ifndef ALPHABET_SIZES
#define ALPHABET_SIZES {26, 26}
#endif //ALPHABET_SIZES

#ifndef APPLY_ROTATION
#define APPLY_ROTATION(Char, Alpha, Rot, AlphabetSize)  (mathMod(((Char) - (Alpha) + (Rot)), (AlphabetSize)) + (Alpha))
#endif //APPLY_ROTATION


static unsigned int mathMod(int x, unsigned int y){
  const int out = x % y;
  return out + (out < 0) * y;
}

/*
	> Description:
	The  caesarCipher()  function  applies a rotationon each byte of string toBeEncrypted, which 
	has to be of size len.  The rotation, which is of size rot, is only applied if the byte is
	recognized as a character of given-at-compile-time alphabets. 
	The result of the cypher is stored in dst. 

	> Warnings:
	The dst memspace has to have (len + 1) bytes allocated as it will be null-terminated.
	
	> Return values:
		If len is invalid, returns NULL.
		Otherwise, returns dst.
*/
char *caesarCipher(char *dst, const char *toBeEncrypted, const size_t len, const int rot)
{
	static const char alphas[NB_ALPHABETS] = ALPHAS;
	static const char omegas[NB_ALPHABETS] = OMEGAS;
	static const size_t alphabetSizes[NB_ALPHABETS] = ALPHABET_SIZES;

	if (len < 1)
	{
		return NULL;
	}

	unsigned int adjustedRotations[NB_ALPHABETS];
	for (size_t i = 0; i < NB_ALPHABETS; ++i)
	{
		adjustedRotations[i] = mathMod(rot, alphabetSizes[i]);
	}
	for (size_t i = 0; i < len; ++i)
	{
		const char current = *(toBeEncrypted + i);

		int wasSet = 0;
		for (size_t j = 0; j < NB_ALPHABETS; ++j)
		{
			if (alphas[j] <= current && current <= omegas[j])
			{
				*(dst + i) = APPLY_ROTATION(current, alphas[j], adjustedRotations[j], alphabetSizes[j]);
				wasSet = 1;
				break;
			}
		}

		if(!wasSet)
		{
			*(dst + i) = current;
		}
	}

	*(dst + len) = '\0';

	return dst;
}

#ifdef TESTING
	#include <assert.h>
	#include <string.h>

	#ifdef NB_ALPHABETS
	#undef NB_ALPHABETS
	#define NB_ALPHABETS 2
	#endif //NB_ALPHABETS

	#ifdef ALPHAS
	#undef ALPHAS
	#define ALPHAS {'A', 'a'}
	#endif //ALPHAS

	#ifdef OMEGAS
	#undef OMEGAS
	#define OMEGAS {'Z', 'z'}
	#endif //OMEGAS

	int main()
	{
		//failure test
		char buff[65535];
		assert(caesarCipher(buff, buff, 0, 0) == NULL);

		//simple success test
		char *res = caesarCipher(buff, "Et tu, Brute?", 13, 13);
		char *expected = "Rg gh, Oehgr?";
		assert(res == buff && strcmp(res, expected) == 0);

		//rather more exhaustive test
		char garbageData[301] = "Why, man, he doth bestride the narrow world\nLike a Colossus, and we petty men\nWalk under his huge legs and peep about\nTo find ourselves dishonorable graves.\nMen at some time are masters of their fates.\nThe fault, dear Brutus, is not in our stars,\nBut in ourselves, that we are underlings.";
		for (short int i = -128; i < 127; ++i)
		{
			res = caesarCipher(buff, garbageData, 301, i);
			res = caesarCipher(buff, res, 301, 26 - mathMod(i, 26)); 
			assert(res == buff && strcmp(res, garbageData) == 0);
		}
	}
#else
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	int main(int argc, char const *argv[])
	{
		if(argc < 3)
		{
			fprintf( 
				stderr, 
				"Expected 2 arguments (input string & rotation length).\nOnly received %d arguments.\n", 
				argc
			);
			return 1;
		}

		size_t length = strlen(argv[1]);
		unsigned short int rot = atoi(argv[2]);
		char *encrypted = (char *)calloc(sizeof(*encrypted), length);
		printf("%s\n", caesarCipher(encrypted, argv[1], length, rot));
		return 0;
	}
#endif //TESTING
