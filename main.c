#include<stdio.h>
int main(void)
{
	int i=0;
	int array[]={2,3,4,5,3,4,8,6};
	int n=sizeof(array)/array[0];
	for(i=0;i<n;i++)
		printf("%d  ",array[i]);
	printf("\n");
	printf("haha\n");
	return 0;
}
