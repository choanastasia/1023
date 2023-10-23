#include <stdio.h>

unsigned long long get_rsp(void){
    __asm__("movq %rsp, %rax");
}

int main() {
    printf("Stack pointer(RSP):0x%llx\n", get_rsp());
    return 0;
}