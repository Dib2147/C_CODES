#include <stdio.h>
int main(){
    int a =5;
    int *ptr;
    int **pptr;
    ptr=&a;
    pptr=&ptr;
    printf("%d\n",a);
    printf("%d\n",**pptr);
    printf("%d\n",*ptr);

}