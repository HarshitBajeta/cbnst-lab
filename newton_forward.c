#include<stdio.h>
int fact(int n)
{
    if(n<=1)
    return n;

    return n*(n-1);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    float a[n][n+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0 ; j<n+1;j++)
        {
            a[i][j] = 0;
        }
        
    }
    for(int i=0; i<n; i++)
    {
        printf("Enter %d x and y: ", i+1);
        scanf("%f%f",&a[i][0],&a[i][1]);
    }
    int j=1,k=1;
    while(k<n)
    {
        for(int i=n; i>k-1;i--)
        {
            a[i][k+1] = a[i][k] - a[i-1][k];
        }
        k++;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0 ; j<i;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }

    float x;
    scanf("%f", &x);
    float u = (x-a[n-1][0]) / (a[1][0] - a[0][0]);
    printf("u = %f\n",u);
    float mul = 1 , sum = a[n-1][1];
    
    for(int i=0; i<n-1;i++)
    {
        printf("\nsum = %f", sum);
        mul *= (u+i);
        sum += mul/fact(i+1)*a[n-1][i+2];
        printf("Upper -> mul %f, fact(i+1) = %d, factor : %f\n", mul, fact(i+1),a[n-1][i+2]);
    }
    printf("Answer is : %f", sum);

}