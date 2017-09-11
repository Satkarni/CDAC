

#include <stdio.h>

int strleng(char *s)
{
	int len=0;
	while(*s++ != '\0')
		len++;

	return len;
}

char *strRev(char *s,char *d)
{
	int len = strleng(s);
	int j=0;
	while(len)
		d[j++] = s[--len];

	d[j] = '\0';
	return d; 
}

void parse(char *s)
{
	int len = strleng(s);
	while(*s != '\0')
	{
		char tmp[100],tmp1[100];
		int i =0;
		while(*s != '\0' && *s != ' ')
		{
			tmp[i++] = *s;
			s++;
		}
		printf("%s ",strRev(tmp,tmp1));
		if(*s != '\0')
		s++;
	}
}


int main()
{
	
	printf("\nEnter a string \t");
	char a[100];
	fgets(a,100,stdin);
	
	printf("%d",strleng(a));
	parse(a);
	char out[100];
	char *op = out;
	op = strRev(a,op);
	printf("\n%s\n",op);
	return 0;
}
