#include <stdio.h>
double factorial(int n);
int main()
{
    int m;
    printf("Enter a real number: ");
    scanf("%d",&m);
    printf("The factorial of %d is %lf",m,factorial(m));
}
double factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
