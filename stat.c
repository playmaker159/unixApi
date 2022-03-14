#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
int main()
{
  //pointer to stat struct
  struct stat sfile;

  //stat system call
  stat("mycat.c", &sfile);

  //accessing st_mode (data member of stat struct)  
  printf("st_mode = %ld\n", sfile.st_nlink);
  printf("st_mode = %ld\n", sfile.st_uid);
  printf("st_mode = %ld\n", sfile.st_gid);
  return 0;
}
