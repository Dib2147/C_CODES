#include <stdio.h>
#include <stdlib.h>
void search(int arr[],int n,int num){
    int flag=0,i;
    for ( i = 0; i < n; i++)
    {
        if (num==arr[i])
        {
            flag=1;
            break;
        }

        
    }
    if (flag==0)
    {
        printf("Element not found");

    }
    else
    {
       printf("Element %d found at position %d",num,i+1);
    }
    
    
}

void main(){
    int n,*arr,num;

    printf("Enter the size of  the array : ");
    scanf("%d",&n);
    arr=malloc(sizeof(int)*n);
    printf("enter array elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("Enter the search elements :\n");
    scanf("%d",&num);
    search(arr,n,num);
    free(arr);
    
    
}
