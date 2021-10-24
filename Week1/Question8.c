#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c,D;
    float r1, r2;
    
    printf("Enter Coefficient of X^2 ,X and Constant term): ");
    scanf("%d%d%d", &a, &b, &c);
    D= (b * b) - (4 * a * c);

    if(D> 0)
    {
        printf("Roots are real and distinct");
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);

        printf("\nRoots are: %.2f and %.2f", r1, r2);
    }
    else if(D == 0)
    {
        printf("Both roots are equal");
        r1=-b/(2.0*a);
        printf("\nRoots are: %.2f", r1);
    
    }
    else if(D < 0)
    printf("Both roots are imaginary");

    return 0;
}