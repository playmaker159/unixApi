#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{	
	printf("PID = %d",getpid());
	printf("\n this is a program to demonstrate exec system call \n");
	char *agrs[]={"./hello",NULL};
	execv(agrs[0],agrs);
	printf("\n Welcome back to exec_demo.c \n");
	return 0;
}
