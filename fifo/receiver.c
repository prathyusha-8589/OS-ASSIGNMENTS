#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
unsigned char rbuff[64];
int fd;
fd=open("desd",O_WRONLY);
read(fd,rbuff,64);
printf("the receiver :%s\n",rbuff);
close(fd);
return 0;
}

