#include<pthread.h>
#include<stdio.h>

void* tentry_fun(void* pv)
{
	char* ps=pv;
	int i;
	printf("%s--welcome\n",ps);
	for(i=1;i<=5;i++)
		printf("%s--%d\n",ps,i);
	//pthread_exit(NULL);
}
int main()
{
	pthread_t pt1,pt2;	//thread handle
	pthread_create(&pt1,NULL,tentry_fun,"A1");
	pthread_create(&pt2,NULL,tentry_fun,"B2");
	pthread_join(pt1,NULL);
	pthread_join(pt2,NULL);
	printf("main--thank you\n");
	return 0;	//exit(0);
}

