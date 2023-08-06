#include <stdio.h>
int main(){
    int age =23;
    int _age = 24;
    int *ptr=&age;
    int *_ptr=&_age;
    //ptr++;
    printf("%u  %u  difference=%d",ptr,_ptr,ptr-_ptr);

    return 0;
}