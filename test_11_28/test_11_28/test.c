#include <stdio.h>
//#include "stdio.h"
int myStrLen(char* s)
{
	char* p = s;
	while (*p != '\0')
		p++;
	//return p-s;
	return 0;
}
void main()
{
	char* pa, * pb;
	char a[9] = "hi,yango";
	pa = &a[3];
	pb = &a[8];
	printf("pa != 0 is %d\n", pa != 0);
	printf("pb == 0 is %d\n", pb == 0);
	printf("pb > pa is %d\n", pb > pa);
	printf("pb - pa is %d\n", pb - pa);
	printf("*(pb-1) is %c\n", *(pb - 1));
	printf("the length of \"hi,yango\" is %d\n", myStrLen(a));
}