#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
void handler(int sig)
{
    if(sig==SIGINT){
        printf("\nSIGINT received\n");
        exit(0);
    }
}
int main(){
    struct sigaction sa;
    sa.sa_handler=handler;
    while (1)
    {
        printf("Hello\n");
        sleep(5);
        if(sigaction(SIGINT,&sa,NULL)==-1){
            perror("sigaction");
        }
    }
    
    
}