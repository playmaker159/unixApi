#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int p;
int main(){
	p=fork();
	if(p==0){
	printf("This is the pid %d\n",p);
	}
	else
	printf("THIS IS pid %d\n",p);
return 0;
}
