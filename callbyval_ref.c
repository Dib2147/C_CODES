#include <stdio.h>
//call by value
void square(int n){
    n=n*n;
    printf("square=%d\n",n);

}
//call by reference
void _square(int *n){
    *n=(*n)*(*n);
    printf("ref square=%d\n",*n);
    
}
int  main(){
    int number =5;
    square(number);
    printf("%d\n",number);
    _square(&number);
    printf("%d\n",number);

}