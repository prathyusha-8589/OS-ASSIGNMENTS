#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t id;
printf("before fork\n");
id=fork();
if(0==id)
{
printf("inchild,id=%d\n",id);
}
else
{
printf("in parent,id=%d\n",id);
}
return 0;
}

