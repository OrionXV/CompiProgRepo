#include <stdio.h> 
int main(){
    long int t;
    double sum, term, pi;
    printf("Enter stuff\n");
    scanf("%ld", &t);
    for(long int i = 1; i<=t+1; i++){

        double term = 1.0/(2.0*i-1.0);
        term = (i % 2) ? term : -term;
        sum = sum + term;
    }
    pi = 4.0 * sum;

    printf("Valor do PI = %lf", pi);
    return 0;
}