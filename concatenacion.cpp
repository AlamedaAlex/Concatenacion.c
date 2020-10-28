#include<stdio.h>
#include<stdlib.h>
int suma(char *ptr1,char *ptr2);
int main(){
	char cad1[20],cad2[20];
	char *ptr1,*ptr2;
	ptr1=(char *)malloc(sizeof(char)*20);
	ptr2=(char *)malloc(sizeof(char)*20);
	ptr1=cad1;
	ptr2=cad2;
	printf("Ingresa cadena 1: \n");
	gets(cad1);
	fflush(stdin);
	printf("Ingresa cadena 2: \n");
	gets(cad2);
	suma(ptr1,ptr2);

	printf("\n la cadena 1 es %s",cad1);
	printf("\n la cadena 2 es %s",cad2);
	return 0;
}
int suma(char *ptr1,char *ptr2){
		for(;*ptr1!='\0';ptr1++);
	for(;*ptr2!='\0';ptr1++,ptr2++)
	*ptr1=*ptr2;

	*ptr1= '\0';
	return 0;
}
