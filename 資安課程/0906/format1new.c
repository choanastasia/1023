#include <stdio.h>

int main()
{
 char buf[12]="12345678901";
 char format[40];
 strcpy(format, "\xa4\xd0\xff\xff%x%x%x%x%x%x%s");
 printf(format, 1,2,3);
 return 0;
}

