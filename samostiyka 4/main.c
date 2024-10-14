#include <stdio.h>
#include <math.h>

int main() 
{
   
    float a = -4.53f;
    float b = 2.74f;
    float x = -8.07f;

    float result = a * exp(b - x) + cosh(3 * tan(b * x));

    printf("Result: % f\n", result);

    return 0;
}
