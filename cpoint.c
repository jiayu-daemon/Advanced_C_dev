
#include <stdio.h>
#include <string.h>

int a[10] = {0};


int hf(char  t[10][8], char * string)
{
	int i;
	char * p = NULL;

	char tmf[128] = {0};
	if(strlen(string) >= 127)
		return -1;
	strncpy(tmf,string,sizeof(tmf));

	p = strtok(tmf,",");
	if(p == NULL)
		return -2;
	strcpy(t[0],p);

	int step = 8;
	i = 1;
	char * myPos = t[0];

	while( (p = strtok(NULL,",")) != NULL){
		//strcpy(t[i++],p);
		//strcpy(myPos+step*i++,p);
		strcpy(*(++t),p);
	}
	return 0;
}


void fom(int * arrv,char t [10][8])
{

	int i = 0;
	for(i = 0; i < 10; i++){
		arrv[i] = atoi(t[i]);
	}
	return ;
}

int main(int argc, char const *argv[])
{
	/* code */
	char mystr[] = {"123,3,45,6,8,99,90,88,7,10"};
	char mt[10][8] = {0};
	char (*p) [8] = mt; 

	int ret = hf(mt,mystr);
	if(ret != 0)
		return;
	fom(a,mt);

	int i = 0;

	for(i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}