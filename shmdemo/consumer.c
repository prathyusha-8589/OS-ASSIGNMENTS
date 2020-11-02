#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/mman.h>
#include<sys/stat.h>
#include<fcntl.h>
int *count_c;

int main()
{
int shmfd;

shmfd=shm_open("/cdacshm",O_RDWR | O_CREAT ,S_IRUSR |S_IWUSR);
ftruncate(shmfd,sizeof(int));
count_c=(int *)mmap(NULL, sizeof(int), PROT_READ |PROT_WRITE, MAP_SHARED, shmfd,0);
while(1)
{
printf("count in consumer:%d\n",*count_c);
sleep(1);

}
shm_unlink(shmfd);
return 0;
}
