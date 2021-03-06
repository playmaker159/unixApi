#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
static void charatatime(char *);
int main(void)
{
	pid_t pid;
	if ((pid = fork()) < 0)
	{
		printf("fork error");
	}
	else if (pid == 0)
	{
		wait(NULL);
		charatatime("output from child\n");
		
	}
	else
	{
		wait(NULL);
		charatatime("output from parent\n");
		
	}
	return 0;
}

static void charatatime(char *str)
{
	char *ptr;
	int c;
	setbuf(stdout, NULL); /* set unbuffered */
	for (ptr = str; (c = *ptr++) != 0; )
	putc(c, stdout);
}
