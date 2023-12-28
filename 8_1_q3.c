#include<stdio.h>

void main(){
	
	int a[10],b[10],c[20];
	int n,i;
	
	printf("enter value");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf("enter value a: ");
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		printf("enter value b: ");
		scanf("%d",&b[i]);
	}
	for (i=0;i<n;i++){
		c[i]=a[i]+b[i];
	}

	printf("Array c is %d",c[i]);
}
