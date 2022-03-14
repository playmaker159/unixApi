#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
	link(argv[1],argv[2]);
	return 0;
}
