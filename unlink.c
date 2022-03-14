#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
	unlink(argv[1]);
	return 0;
}
