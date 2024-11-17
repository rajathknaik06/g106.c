/*Eden is tasked with writing a program to help her calculate the sum of a series using the Taylor series expansion. Help her write a program that takes inputs for the base value x and the number of terms n, then outputs the result. 



The Taylor series is given by: ex = 1 + x/1! + x2/2! + ... + xn/n! where the power values are calculated using the pow() function.



Example



If x=4 and n=3, the calculation is given by:

e4 = 1 + 4/1! + 42/2! + 43/3! 

     = 1 + 4 + 8 + 10.6666

     = 23.6666 which rounds off to 23.67.

Input format :
The input consists of two space-separated integers x and n, representing the base value and the number of terms in the series, respectively.

Output format :
The output prints a double value, representing the sum of the series, rounded off to two decimal places.

*/

#include <stdio.h>
#include <math.h>

int x;     
int terms; 

double calculateSeriesSum() {
    double sum = 0.0;
    int factorial = 1;

    for (int i = 0; i <= terms; i++) {
        double term = pow(x, i) / factorial;
        sum += term;
        factorial *= (i + 1);  
    }

    return sum;
}

int main() {
    scanf("%d", &x);
    scanf("%d", &terms);
    
    double result = calculateSeriesSum();
    printf("%.2lf\n", result);

    return 0;
}
