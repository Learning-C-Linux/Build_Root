#include <stdio.h>
extern int add(int a,int b);
extern void pro();
int main()
{
	int a=10,b=20;
	printf("Starting from main\n");
	printf("Value is %d",add(a,b));
	pro();
	return 0;
}
