#include<pthread.h>
#include<stdio.h>

const int max=10;

void* tentry_fun1(void* pv)
{
	int i;
	printf("A--welcome\n");
	for(i=1;i<=max;i++)
	{
		printf("A--%d\n",i);
		sleep(1);
	}
	//pthread_exit(NULL);
}
void* tentry_fun2(void* pv)
{
	int i;
	printf("B--welcome\n");
	for(i=1;i<=max;i++)
	{
		printf("B--%d\n",i);
		sleep(1);
	}
	//pthread_exit(NULL);
}
int main()
{
	pthread_t pt1,pt2;	//thread handle
	pthread_create(&pt1,NULL,tentry_fun1,NULL);
	pthread_create(&pt2,NULL,tentry_fun2,NULL);
	pthread_join(pt1,NULL);
	pthread_join(pt2,NULL);
	printf("main--thank you\n");
	return 0;	//exit(0);
}

