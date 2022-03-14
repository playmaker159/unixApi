#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>

int extern errno;
int main(int argc, char*argv[])
{
	int  fd =access("file",(R_OK|W_OK));
	if(fd==-1)
	{
		printf("Error\n");
	}
	else	
	printf("No Error \n");
}
