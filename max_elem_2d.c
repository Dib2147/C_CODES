>#include <stdio.h>
#include <stdlib.h>
int max(int *,int,int);
int main(void){
    int i,j,r,c;
    printf("Enter row and column number :\n");
    scanf("%d%d",&r,&c);
    printf("Enter array elements : \n");
    int *ptr=malloc(sizeof(int)*(r*c));
    for ( i = 0; i < r*c; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The 2D array is : \n");
    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",ptr[i*c+j]);
        }
        printf("\n");
        
    
    }
    max(ptr,r,c);
    free(ptr);
    return 0;
    
    
}
int max(int *ptr,int r,int c)
{
    int large=ptr[0],i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; i < c; j++)
        {
            if (large<ptr[i*c+j])
            {
                large=ptr[i*c+j];
                
            }
            
        }
        if (large<ptr[i*c+j])
        {
            large=ptr[i*c+j];
            break;
        }
        
        
    }
    //printf("%d\n",ptr[i*c+j]);
    printf("The largest element is %d and its possition is row num=%d , column num=%d",large,i+1,j+1);
    return 0;

    

}