#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
void waitexample()
{
int stat;
if(fork()==0)
		exit(1);
else
wait(&stat);
if(WIFEXITED(stat))
printf("exit status : %d\n",WEXITSTATUS(stat));
else if (WIFSIGNALED(stat))
psignal(WTERMSIG(stat),"exit signal");
}
int main()
{
waitexample();
return 0;
}

