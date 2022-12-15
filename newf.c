#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("\nEnter the value of n:\n");
    scanf("%d",&n);
    float x[n+1], y [n+1],val,X,p=1,h,u;
    printf("\nEnter the values in form x,y:\n");
    for (i=1;i<=n;i++)
        scanf("%f %f",&x[i],&y[i]);
    printf("\nEnter the value of x for which the value of y is wanted: \n");
    scanf("%f",&X);
    h=x[2]-x[1];
    val=y[1];
     u =(X-x[1])/h;
     for( i=1;i<=n-1;i++){
       for( j=1;j<=n-i;j++){
         y[j]=y[j+1]-y[j];
       }
       p=p*(u-i+1)/i;
       val=val+p*y[1];
       }
       printf("value of f(%f)=%f",X,val);
    
    return 0;
}
