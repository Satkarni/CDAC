#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int fd,nbytes;
	//0666 -- read/write perms user,group,others
	fd=open("sample.txt",O_WRONLY|O_CREAT, 0666);
	//fd=open("sample.txt",O_WRONLY);
	if(fd<0)
	{
		perror("open");
		exit(1);
	}
	char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int len=strlen(str);//sizeof(str)
	nbytes=	write(fd, str, len);
	if(nbytes<0)
	{
		perror("write");
		exit(2);
	}
	printf("written successfully,nbytes=%d\n",nbytes);
	close(fd);
	return 0;	//exit(0);
}
		





