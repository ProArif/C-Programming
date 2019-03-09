#include<stdio.h>
#include<math.h>

float f(float x)
{
    return pow(x,3)-0.165* pow(x,2)+3.993* pow(10,-4);
}
float df(float x)
{
    return 3* pow(x,2) - 0.33*x ;
}

void main()
{
    int iteration,maxIteration;
    float xr,x0,x1,allowedError;
    printf("Enter x0,allowed error and maximum iterations\n");
    scanf("%f %f %d",&x0,&allowedError,&maxIteration);

    for(iteration=1;iteration<=maxIteration;iteration++)
    {

        x1=f(x0)/df(x0);
        xr=x0-x1;
        printf("Iteration Number: %3d,Xr = %9.6f\n",iteration,xr);
        if(fabs(x1)<=allowedError)
        {
            printf("After %d Iterations ,Root is = %8.6f\n",iteration,xr);
            return 0;
        }
        x0=xr;
    }
    printf("Iterations are insufficient or Wrong Input\n");
    return 1;
}
