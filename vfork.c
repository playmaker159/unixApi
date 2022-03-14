#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int pid;
	pid=vfork();
	if(pid == 0)
	{
		printf("\n this is a child process \n");
	}
	else if(pid>0)
	{
		
		printf("\n this is a parent process \n");
	}
	else
	{
		printf("\n fork error \n");
	}
}
