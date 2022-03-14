#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
	chmod("file", S_IRUSR|S_IWUSR);
	return 0;
}
