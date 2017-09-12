#include<stdio.h>

int main()
{
	printf("Welcome...\n");
	printf("enter any char\n");
	getchar();
	printf("process going to slepp\n");
	sleep(5);
	printf("process unblocked,entering a loop\n");
	while(1);
	return 0;
}
