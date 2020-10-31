#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t id;
pid_t parid;
id=getpid();
parid=getppid();
printf("pid:%d\n",id);
printf("ppid:%d\n",parid);
return 0;
}
