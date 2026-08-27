#include<stdio.h>
double my_atof(const char *);
int main()
{
	char s[20];double n;
	printf("enter string:\n");
	scanf("%[^\n]",s);
	n=my_atof(s);
	printf("%f\n",n);
	return 0;
}
double my_atof(const char *s)
{
	int i,j,c=0,flag=0,p=1;double n1=0,n=0;
	for(i=0;s[i]==' ' || s[i]=='\t';i++);
	if(s[i]=='-' || s[i]=='+' )
		j=i+1;
	else
		j=i;
	for(;s[j];j++)
	{
		if(s[j]=='.')
			flag=1;

		else if(s[j]>='0' && s[j]<='9')
		{
			if(flag==0)

				n1=n1*10+s[j]-'0';

			else
			{
				n=n*10+s[j]-'0';
				p*=10;
			}
		}
		else if(s[j]==' ' ||s[j]=='\t')
			continue;
		else
			break;
	}
	n1=n/p+n1;
	if(s[i]=='-')
		n1=-n1;
	return n1;
}          
