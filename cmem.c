#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char string[10][20] ={"hi", ",", "I","am","very","happy","to","hear","this","."};


void get_memory(char **p, int size)
{
	*p = (char *)malloc(num);
}

void memory_free(char **p)
{
	free(*p);
}

int main(int argc, char const *argv[])
{
	/* code */
	char * point = NULL;
	get_memory(&point,10);
	printf("0x%X\n",point);
	strncpy(point,"hello",strlen("hello"));
	printf("%s\n",point);
	memory_free(&point);


	return 0;
}

