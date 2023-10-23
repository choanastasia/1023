#include <stdio.h>

int main()

{

 char format[40];
 strcpy(format, "%08x.%08x.%08x.%08x.%08x.%08x.%08x");
 printf(format,1,2,3);
 return 0;
}

