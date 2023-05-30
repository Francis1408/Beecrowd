#include <stdio.h>

#define MAXSIZE 19

long long revertivel[MAXSIZE];

void bemRevertivel();
long long qtsPalindromo(unsigned short);

int main ()
{

	unsigned short numero;

	bemRevertivel();

	scanf("%hu", &numero);
	printf("%lld\n", revertivel[numero]);
    
    return 0;

}

void bemRevertivel()
{

	revertivel[1] = 0;
	revertivel[2] = 36;

	unsigned short i;
	for (i = 3; i <= 18; ++i)
		if (i & 1)
			revertivel[i] = revertivel[i - 1] * 10;
		else
		{

			revertivel[i] = revertivel[i - 2] * 100;
			revertivel[i] += 45 * qtsPalindromo(i - 2);

		}

}

long long qtsPalindromo(unsigned short x)
{

	x = x / 2;
	unsigned short i;
	long long retorno = 9;

	for (i = 1; i < x; ++i)
		retorno *= 10;

	return retorno;

}