#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>

int main()
{
int fd;
fd=open("desd",O_WRONLY);
write(fd,"cool\n",5);
close(fd);
return 0;
}
