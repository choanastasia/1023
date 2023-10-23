#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int testfunc(char *);
int main(void) {
   char str1[20];
   gets(str1);
   testfunc(str1);
      return 0;
}
int testfunc(char *arg) {
       char buff[20];
       if (strlen(arg) >= sizeof(buff)){
       puts("Input Error!");
       return -1;
       }
       strncpy(buff, arg, 19);
       buff[19]='\0';
       puts("Input OK!");
       printf("Input string is: %s", buff);
       return 0;
}
