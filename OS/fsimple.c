#include<unistd.h>

int main()
{
	printf("welcome..pid=%d\n",getpid());
	fork();
	printf("thank you,pid=%d,ppid=%d\n",
			getpid(),getppid());
	return 0;
}
