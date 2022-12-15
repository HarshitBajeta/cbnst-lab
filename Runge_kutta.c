
#include<stdio.h>
#include<math.h>
float f(float x,float y);
int main()
{   printf("Harshit Bajeta, A-14\n");
    float x0,y0,k1,k2,k3,k4,k,y,x,h,xn;
    printf("Enter x0,y0,xn,h(stepsize):");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);
    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        k1=h*f(x,y);
        k2=h*f((x+h/2.0),(y+k1/2.0));
        k3=h*f((x+h/2.0),(y+k2/2.0));
        k4=h*f((x+h),(y+k3));
        k=((k1+2*k2+2*k3+k4)/6);
        y=y+k;
        x=x+h;
        printf("%f\t%f\n",x,y);
    }
}
float f(float x,float y){
    float m;
    // m=(x-y)/(x+y);
     m=(y*y-x*x)/(y*y+x*x);
    return m;
}




