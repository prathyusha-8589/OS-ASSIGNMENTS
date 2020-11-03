#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *serial(void *arg)
{
printf("serial:initialization started\n");
sleep(2);
printf("serial port: initialized\n");
printf("serial: started\n");
}

void *ethernet(void *arg)
{
printf("ethernet:initialization started\n");
sleep(3);
printf("ethernet: initialized\n");
printf("ethernet: started\n");
}

void *lcd(void *arg)
{
printf("lcd:initialization started\n");
sleep(6);
printf("lcd: initialized\n");
printf("lcd: started\n");
}

void *adc(void *arg)
{
printf("adc:initialization started\n");
sleep(4);
printf("adc: initialized\n");
printf("adc: started\n");
}

pthread_barrier_t barr;
int main()
{
pthread_t s,e,l,a;
pthread_barrier_init(&barr,NULL ,4);
pthread_create(&s,NULL,serial,NULL);
pthread_create(&e,NULL,ethernet,NULL);
pthread_create(&l,NULL,lcd,NULL);
pthread_create(&a,NULL,adc,NULL);


pthread_join(s,NULL);
pthread_join(e,NULL);
pthread_join(l,NULL);
pthread_join(a,NULL);

pthread_barrier_destroy(&barr);
return 0;
}
