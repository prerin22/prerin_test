#include<stdio.h>
void main(){
	
	int p;


	printf("enter array size:");
	scanf("%d",&p);
	printf("enter elements of array:");
	int a[p];
	int i;
	for(i=0;i<p;i++){
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}

	printf("square of array\n");
	printf("\n");
	for(i=0;i<p;i++){
	
	a[i]=a[i]*a[i];
	
	printf("%d\t",a[i]);
}
}
