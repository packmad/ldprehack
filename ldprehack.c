#include<stdio.h>


int strcmp(const char* s1, const char* s2)
{
    printf("s1: %sn\n", s1);
    printf("s2: %sn\n", s2);
    return 0;
}

int ptrace(int request, int pid, int addr, int data)
{
    return 0;
}

int rand()
{
    return 42;
}

