#include<stdio.h>
int main(){
	int a=10;
	int *i=NULL;
	printf("address a=%p\n",a);
	i=&a;
	printf("address i=%p\n",i);
	int b=10;
	i=&b;
	printf("address a=%p\n",a);
	printf("address i=%p\n",i);
	return 0;
	
}
