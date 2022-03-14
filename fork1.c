#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int pid;
	pid=fork();
	if(pid == 0)
	{
		printf("\n this is a child process and its pid value is: %d\n",pid);
	}
	else if(pid>0)
	{
		printf("\n this is a parent process and its pid value is:%d\n",pid);
	}
	else
	{
		printf("\n fork error \n");
	}
}
