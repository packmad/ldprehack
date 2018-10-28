#define _GNU_SOURCE
#include<dlfcn.h>
#include<stdio.h>

typedef int (*orig_strcmp_f_type)(const char *s1, const char *s2);
int strcmp(const char* s1, const char* s2)
{
    orig_strcmp_f_type orig_strcmp = (orig_strcmp_f_type) dlsym(RTLD_NEXT,"strcmp");
    int ret = orig_strcmp(s1, s2);
    printf("strcmp(%s, %s) == %d\n", s1, s2, ret); 
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

