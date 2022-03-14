#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,pid;
	pid=fork();
	if(pid == 0)
	{
		
		n=1;
		
	}
	else if(pid>0)
	{
		n=10;
	}
	else
	{
		printf("\n fork error \n");
	}
	wait(NULL);
	int i;
	for(i=n;i<n+10;i++)
	{
		printf("%d ",i);
	}
	
}