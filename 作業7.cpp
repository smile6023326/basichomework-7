#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{
	int n,i=1,su=0;
	do
	{
		printf("�q�X1+2+....+n���`�M\n"); 
		printf("�п�Jn�Ȭ��G"); 
		scanf("%d",&n); 
	}
	while (n<=0);  
	do 
	su+=i++; 
	while (i <= n);
	printf("1+2+...+%d=%d\n",n,su);
	system("pause"); 
	return 0; 
	
}
