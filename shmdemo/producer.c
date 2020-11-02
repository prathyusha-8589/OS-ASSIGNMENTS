#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
int *count;
int ip;
int main()
{
int shmfd;

shmfd=shm_open("/cdacshm",O_RDWR | O_CREAT ,S_IRUSR |S_IWUSR);
ftruncate(shmfd,sizeof(int));
count=(int *)mmap(NULL, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, shmfd,0);
while(1)
{
scanf("%d",&ip);
*count=ip;
}
shm_unlink(shmfd);
return 0;
}
