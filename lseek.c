#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
	int n, fd;
	char buff[100],filename[20];
	fd=open(argv[1],O_RDWR,0777);
	if(fd < 0)
	{
		printf("\n File doesn't exist \n");
		return 1;
	}
	lseek(fd,5,SEEK_SET);
	n=read(fd,buff,1000);
	write(1,buff,n);
	close(fd);
	return 0;
}
