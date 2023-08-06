#include<stdio.h>
int main ()
{
    int n;
    
    for(int i=1;i<5;){
        printf("enter the number : ");
        scanf("%d",&n);
        
        if(n % 2 != 0){
            break;
        }
        printf("%d\n",n);
    
    


    }
    
    printf("end");
    return 0;
}

