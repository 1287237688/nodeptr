#include<stdio.h>
int main()
{
    int a=5;
    char *p=(char *)a;
    printf("%x\n",a);
    printf("%x\n",p);
    printf("%d\n",&a);
    printf("%d\n",p);
    return 0;
}
