#include<stdio.h>
int main()
{
    int n,i,Tb=0,Price;
    int q[100],p[100],pp[100];
    printf(" Enter Items numbers :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        {
            printf("Enter the item %d qnt = \n",i);
            
            scanf("%d",&q[i]);
            
            printf("Enter the item %d price = \n",i);
            scanf("%d",&p[i]);
            
            
        }
        
        
    }
    for(i=1;i<=n;i++){
        
        pp[i]=q[i]*p[i];
        printf("item %d total price = %d\n",i,pp[i]);
        Tb +=pp[i];
        
    }
    printf("Total Bill = %d\n",Tb);
    if(Tb>=1000){
        Price=Tb*90/100;
        printf("Discounted Bill is %d",Price);
    }
    /*else{
        Price=Tb;
         printf("Your Total Bill is %d ",Price);
    }*/
    return 0;
    
}