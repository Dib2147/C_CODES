#include<stdio.h>
#include <stdlib.h>
void search_2d(int[],int,int,int);
int main(void)
{
    int r,c,i,j,num;

    printf("Enter number of rows and columns :\n");
    scanf("%d%d",&r,&c);

    printf("Enter array elements :\n");

    int *ptr=malloc(sizeof(int)*(r*c));
    

    for ( i = 0; i < r*c; i++)
    {
        scanf("%d",&ptr[i]);
    
    }

    printf("The 2D array is \n");
    
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d%d",ptr[i*c+j],i*c+j);
        }
        printf("\n");
        
    }

    printf("enter Search element : ");
    scanf("%d",&num);

    search_2d(ptr,r,c,num);
    free(ptr);
    
    return 0;
}
void search_2d(int ptr[],int r,int c,int num)
{
    int flag=0,i,j;

    for ( i = 0; i < r; i++){
        for (j = 0; j< c; j++){
            if(num==ptr[i*c+j]){

                flag=1;
                break;
            }

        }
        if(flag==1)
         break;
    
        
    }
    if(flag==0)
     printf("element not found");
    else
     printf(" %d found in row number %d and column number %d ",num,i+1,j+1);
    
    

}
