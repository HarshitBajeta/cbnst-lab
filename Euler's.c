#include<stdio.h>
float fun(float x,float y)
{
    float f;
    f=x+y;
    return f;
}
int main()
{   printf("Harshit Bajeta, A-14\n");
    float a,b,x,y,h,k,xn;
    printf("\nEnter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&a,&b,&h,&xn);
    x=a;
    y=b;
    printf("\n  x\t  y\n");
    while(x<xn)
    {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf("%0.3f\t%0.3f\n",x,y);
    }
}



