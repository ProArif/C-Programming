#include<stdio.h>
#include<math.h>
#define EPSILON 0.001


double func(double x)
{
    return x*x*x - x*x + 2;
}

// Derivative of the above function which is 3*x^x - 2*x
double derivFunc(double x)
{
    return 3*x*x - 2*x;
}

// Function to find the root
void newtonRaphson(double x)
{
    double h = func(x) / derivFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivFunc(x);

        // x(i+1) = x(i) - f(x) / f'(x)
        x = x - h;
    }
    printf("The value of root is : %lf",x);

    }

// Driver program to test above
int main()
{
    double x0;
    printf("Enter the value of x0: \n");
    scanf("%lf",&x0);
    newtonRaphson(x0);
    return 0;
}

