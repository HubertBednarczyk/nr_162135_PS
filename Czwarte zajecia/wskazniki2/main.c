#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int* p=&a;
    int* q=&a;
    printf("%d \n",p=a);
    printf("%d \n",*p=&a);
    //printf("%d",&p=q);
    printf("%d \n",p=&q);
    printf("%d \n",p=*&q);
    printf("%d \n",p=q);
    printf("%d \n",p=*q);
    printf("%d \n",*p=q);
    printf("%d \n",*p=*q);
    return 0;
}
