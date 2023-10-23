#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
   char a[16];      //remark 1
   char b[16];      //remark 2
   char c[32];      //remark 3

   strcpy(a, "0123456789abcdef");     //remark 4
   strcpy(b, "0123456789abcdef");     //remark 5
   strcpy(c, a);                      //remark 6
   strcat(c, b);                      //remark 7
   printf("c=%s\n", c);
   return 0;
}
