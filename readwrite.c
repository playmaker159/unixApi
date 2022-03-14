#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>

#include<stdio.h>
int main()
{
	int n, fd;
	char buff[200];
	printf("Enter the text to write to the file: \n");
	n=read(0,buff,100);
	fd=open("file",O_CREAT|O_RDWR,0777);
	write(fd,buff,n);
	write(1,buff,n);
	close(fd);
}
