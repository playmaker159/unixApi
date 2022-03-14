#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int pid;
	int a=10, b=20;
	printf("\n befor fork()\n");
	pid=vfork();
	if(pid == 0)
	{
		printf("\n this is a child process and its pid value is: %d\n",getpid());
		a++;
		b++;
		exit(0);
		
	}
	else if(pid>0)
	{
		sleep(2);
		printf("\n this is a parent process and its pid value is:%d\n",getpid());
		a--;
		b--;
	}
	else
	{
		printf("\n fork error \n");
	}
	printf("\n the value of a is : %d\n the value of b is:%d\n",a,b);
	
	
	
}
