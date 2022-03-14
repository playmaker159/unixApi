#include<stdio.h>
#include<stdlib.h>
int main()
{
	char  *p;
	char *home;
	p=getenv("MYENV"); 
	printf("p=%s\n",p);
	putenv("MYENV=Hello");
	p=getenv("MYENV"); 
	printf("p=%s\n",p);
	home=getenv("HOME"); 
	printf("home=%s\n",home);
	setenv("HOME","/home/kaushik/CSA",1);
	home=getenv("HOME"); 
	printf("home=%s\n",home);
	system("echo $HOME");

	
}
