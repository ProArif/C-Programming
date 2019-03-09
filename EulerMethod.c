#include<stdio.h>
#include<math.h>
#include<conio.h>
#define F(x) x+2*y
float fxy(float x,float y)
{
    return x+2*y;
}
int main()
{
    float x0,y0,h,x1,y1,p;
    float truevalue=2.60;
    printf("Enter the value of X0:\n");
    scanf("%f",&x0);
    printf("Enter the value of Y0:\n");
    scanf("%f",&y0);
    printf("Enter the value of H:\n");
    scanf("%f",&h);
    printf("Enter the value of END POINT:\n");
    scanf("%f",&p);
    while(x1<=p)
    {
        x1=h+x0;
        y1=y0+fxy(x0,y0)*h;
        x0=x1;
        y0=y1;
        printf("X %f \t Y %f\n",x1,y1);
    }
    float trueerror=truevalue-y1;
    printf("True Error %f\n",trueerror);
    float absolutelerror=(trueerror/truevalue)*100;
    printf("Absolute Error %f",absolutelerror);
    return 0;
}
