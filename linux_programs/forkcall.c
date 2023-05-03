#include<stdio.h>
#include<unistd.h>
int main(void)
{
	pid_t pid=fork();
	if(pid>0)
printf("parent process:parentPID=%d,childPID=%d\n",getpid(),pid);
else
printf("child process:childPID=%d,parentPID=%d\n",getpid(),pid);
sleep(2);
return 0;
}
