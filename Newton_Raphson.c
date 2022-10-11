#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

float f(float x){
     return pow(x,3)-(x*x)+2;
}

float d(float x){
    return 3*x*x - 2*x;
}

void main()
{
	 float x0, x1, e;
	 int step = 1, N;
	
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 /* Implementing Newton Raphson Method */
	 printf(" Step\tRoot\n");
	 while(1){
	     x1=x0-(f(x0)/d(x0));
	     if(fabs(f(x1))<e){
	         printf("root is %f\n",x1);
	         printf("Iteration is %d",step);
	         break;
	     }
	     x0=x1;
	     printf("%d\t%f\n",step,x0);
	     step=step+1;
	 }
	 
}

