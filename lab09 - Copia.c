#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double var = 0.0;
	int i;

	for (i = 0; i < 1000000; i++){
		var = var + 3/(i*i + 3*i);
	}
	printf("%i\n",var);


	return 0;
}
