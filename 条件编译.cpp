#include <stdio.h>
//#define DAXIE 1
void f1(void);
void f2(void);
void f3(void);
int main(void)
{
	f2();
	return 0;
}
void f1(void)
{
	char ch;
	while((ch = getchar())!='\n')
	{
#if 1		
		if(ch >= 'A' && ch<= 'Z')
			ch += 32;
#else			
		if(ch >= 'a' && ch<= 'z')
			ch -= 32;
#endif
		putchar(ch);
	}
}
void f2(void)
{
	char ch;
	while((ch = getchar())!='\n')
	{
#ifdef DAXIE		
		if(ch >= 'A' && ch<= 'Z')
			ch += 32;
#else			
		if(ch >= 'a' && ch<= 'z')
			ch -= 32;
#endif
		putchar(ch);
	}
}
void f3(void)
{
	char ch;
	while((ch = getchar())!='\n')
	{
#ifndef DAXIE		
		if(ch >= 'A' && ch<= 'Z')
			ch += 32;
#else			
		if(ch >= 'a' && ch<= 'z')
			ch -= 32;
#endif
		putchar(ch);
	}
}

