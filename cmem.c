#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void get_memory(char **p, int size)
{
	*p = (char *)malloc(size); // 返回地址
}

void memory_free(char *p)
{
	free(p);
}


void swap(int * a, int * b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}



int main(int argc, char const *argv[])
{
	/* code */
	char * point = NULL;

	get_memory(&point,10);
	printf("0x%X\n",point);

	strncpy(point,"hello",strlen("hello"));
	printf("%s\n",point);
	
	//free(point); // free 变量
	memory_free(point);

	int a = 3,b =6;
	swap(&a,&b);
	printf("a = %d b = %d\n",a,b);

	return 0;
}

