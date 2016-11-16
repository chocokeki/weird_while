#include <stdio.h>

int main()
{
	int j;
	int i=0;

	while(j=0, i++, 1){
		if(i > 5)
			break;

		printf("hello world - %d\n", j++);
	}

	return 0;
}
