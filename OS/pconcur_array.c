#include<pthread.h>
#include<stdio.h>
#include<time.h>

int arr[1000] = {0};
struct sum_
{
    int sum1;
    int sum2;
    int sum3;
    int sum4;
    int sum;
}sumStruct;
const int max=10;

void* tentry_fun1(void* pv)
{
	int i;
	printf("A--welcome\n");
	for(i=0;i<250;i++)
	{
        sumStruct.sum1 += i;
	}
	pthread_exit(NULL);
}
void* tentry_fun2(void* pv)
{
	int i;
	printf("B--welcome\n");
	for(i=250;i<500;i++)
	{
        sumStruct.sum2 += i;
	}
	pthread_exit(NULL);
}
void* tentry_fun3(void* pv)
{
	int i;
	printf("C--welcome\n");
	for(i=500;i<750;i++)
	{
        sumStruct.sum3 += i;
	}
	pthread_exit(NULL);
}
void* tentry_fun4(void* pv)
{
	int i;
	printf("D--welcome\n");
	for(i=750;i<=1000;i++)
	{
        sumStruct.sum4 += i;
	}
	pthread_exit(NULL);
}
int main()
{

clock_t begin = clock();


	pthread_t pt1,pt2,pt3,pt4;	//thread handle
	pthread_create(&pt1,NULL,tentry_fun1,NULL);
	pthread_create(&pt2,NULL,tentry_fun2,NULL);
	pthread_create(&pt3,NULL,tentry_fun3,NULL);
	pthread_create(&pt4,NULL,tentry_fun4,NULL);
	pthread_join(pt1,NULL);
	pthread_join(pt2,NULL);
	pthread_join(pt3,NULL);
	pthread_join(pt4,NULL);
    sumStruct.sum = sumStruct.sum1 + sumStruct.sum2 + sumStruct.sum3 + sumStruct.sum4;
clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nSum: %d",sumStruct.sum);
    printf("\nTime: %lf",time_spent);

int suma;
begin = clock();
    for(int i=0;i<1000;i++)
    {
        suma += i;
    }

end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nSum: %d",suma);
    printf("\nTime: %lf",time_spent);
    printf("main--thank you\n");
	return 0;	//exit(0);
}

