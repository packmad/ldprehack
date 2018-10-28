#include<stdio.h>


int strcmp(const char* s1, const char* s2)
{
    printf("s1: %sn\n", s1);
    printf("s2: %sn\n", s2);
    return 0;
}

int ptrace(int request, int pid, int addr, int data)
{
    printf("ptrace hijacking\n");
    return 0;
}

int rand()
{
    int ret = 42;
    printf("rand hijacking, ret=%d\n", ret);
    return ret;
}

