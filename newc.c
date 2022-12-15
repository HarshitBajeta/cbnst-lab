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
    val=y[n];
     u =(X-x[n])/h;
     for( i=1;i<=n;i++){
       for( j=n;j>=i+1;j--){
         y[j]=y[j]-y[j-1];
       }
       p=p*(u+i-1)/i;
       val=val+p*y[n];
       }
       printf("value of f(%f)=%f",X,val);
    
    return 0;
}
