// #include <stdio.h>
// int fib(int n);
// int main(){
//     fib(6);
    
//     return 0;

// }
// int fib(int n){
//     if(n==1){
//         return 1;
//     }
//     if(n==0){
//         return 0;
//     }
//     int FibN,FibN1,FibN2;
    
//     FibN1=fib(n-1);
//     FibN2=fib(n-2);
//     FibN=FibN1+FibN2;
//     printf("%d\t",FibN);
    
//     return FibN;
// }
#include<stdio.h>
int Fibonacci(int n)
{
if (n <= 1) 
return n; 
return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
int main()
{
int n, sum = 0;
printf("Enter the nth value: ");
scanf("%d", &n);
printf("Fibonacci series: ");
while(Fibonacci(sum) <= n)
{
printf("%d ", Fibonacci(sum));
sum++;
}
}