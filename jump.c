#include<stdio.h>
#include<setjmp.h>
#include<stdlib.h>
jmp_buf buf;
void func()
{
	printf("\n Hello World \n");
	longjmp(buf,1);
	printf("\n Good Morning\n");
}

int main()
{
	if(setjmp(buf))
	{
		printf("Error \n");
		exit(0);
	}
	else
	{
		printf("\n Computer Science \n");
		func();
	}
	return 0;
}
