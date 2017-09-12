#include<unistd.h>
#include<sys/wait.h>

int main()
{
	int ret,i,status;
	printf("welcome..pid=%d\n",getpid());
	ret=fork();
	if(ret<0)
	{
		perror("fork");
		exit(1);
	}
	if(ret==0)
	{
		printf("child--welcome,pid=%d,ppid=%d\n",
			getpid(),getppid());
		for(i=1;i<=5;i++)
		{
			printf("child--pid=%d,ppid=%d\n",
				getpid(),getppid());
			usleep(100);
		}
		//exit(5);
		exit(0);
	}
	else	//ret>0
	{
		printf("parent--hello,pid=%d,ppid=%d\n",
			getpid(),getppid());
		//real work
		waitpid(-1,&status,0); //wait(&status);
		printf("parent--child exit status=%d\n",
			WEXITSTATUS(status));
	}
	//printf("thank you,pid=%d,ppid=%d\n",
	//		getpid(),getppid());
	return 0;
}
