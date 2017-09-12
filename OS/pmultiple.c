#include<pthread.h>
#include<stdio.h>

void* tentry_fun(void* pv)
{
	int i,id=(int)pv;
	printf("%d--welcome\n",id);
	for(i=1;i<=5;i++)
		printf("%d--%d\n",ps,id);
	//pthread_exit(NULL);
}
int main()
{
	int i,n=10;
	pthread_t ptarr[n];
	for(i=0;i<n;i++)
	{
	  k=100+i;
	  pthread_create(&ptarr[i],NULL,
				tentry_fun,(void*)k);
	}
	for(i=0;i<n;i++)
	  pthread_join(ptarr[i],NULL);
	printf("main--thank you\n");
	return 0;	//exit(0);
}

