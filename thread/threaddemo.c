#include<stdio.h>
#include<pthread.h>
void *thread(void *arg)
{
printf("thread\n");
}
int main()
{
pthread_t tid;
printf("before thread created\n");
pthread_create(&tid,NULL,thread,NULL);
printf("after thread created\n");
return 0;
}
