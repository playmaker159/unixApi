#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int pid;
	printf("\n HEllO \n");
	pid=fork();
	
	if(pid == 0)
	{
		printf("\n world \n");
	}
	else if(pid>0)
	{
		printf("\n CEC \n");
	}
	else
	{
		printf("\n fork error \n");
	}
}
