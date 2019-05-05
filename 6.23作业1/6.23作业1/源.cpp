/*1¡¢char *My_strncpy(char *dest,const char *src,int n);*/
#include<stdio.h>
#include<assert.h>
char *My_strncpy(char *dest,const char *src,int n)
{
	assert( src != NULL);
	
	for(int i=0 ; i<n ; i++)
	{		
		*dest=*src;
		dest++;
		src++;
	}
	return dest;
}
int main()
{
	char dest[10]={};
	char src[]="hahahaha";
	*My_strncpy(dest,src,4);
	printf("%s\n",dest);
	return 0;
}