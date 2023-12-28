#include<stdio.h>

void main(){
	
	int i,n;
	int a [100];
	
	printf("enter Array size:- ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf("enter a[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	printf("Length of an Array %d",n);
}
