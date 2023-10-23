#include <stdio.h>
#include <string.h>
int main()
{
    char buf[16]="abcdefghijklmno";
    char vuln[48];
    strcpy (vuln, "\xff\xff\xff\xff%x.%x");
    printf(vuln,1,2);
    return 0;
}