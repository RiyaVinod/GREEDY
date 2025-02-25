#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	char pwd[20];
	char i=0;
	printf("Enter the password: ");
	while((ch=getch())!=13)
	{
		pwd[i]=ch;
		i++;
		printf("* ");
	}
	printf("the password is %s", pwd);
}
