/** 
 *        name: nome.c                  (nome adequado à funcionalidade deste programa)
 *  created on: Outubro 2021            (data de edição)
 *      author: manuel.carvalho@isel.pt (email do autor ou autores )
 *    exercise:                         (enunciado)
 
 *Sites to use:
 *              http://www.tutorialspoint.com/cprogramming/index.htm
 *              http://publications.gbdirect.co.uk/c_book/
 *                http://www.tutorialspoint.com/c_standard_library/
 *
 * escrever texto da linha seguinte no terminal do ubuntu (unix) para compilar/linkar
 *     Build  : gcc  -Wall -o nome nome.c -lm -lpg (nome corresponde ao nome do ficheiro)
 *     Execute: nome  (é o ficheiro executável gerado na linha anterior)
 */
#include <stdio.h>  //contém funções de ler do teclado e de escrever no terminal
#include <math.h>   //contém funções matemáticas
#include <stdlib.h> //contém funções matemáticas e outras
#include <stdbool.h>//contém os valores booleanos - os literais C true e false

#include <string.h> //contém funções de tratamento de cadeias de caracteres
#include <time.h>   //contém funções sobre contagem de tempo
#include <limits.h> //contém as constantes e domínio dos tipos C
#include <ctype.h>  //contém funções de tratamento de caracteres 

int main()
{
    long int termos;
    double sum, term, pi;
    sum = 0.0;
     
    printf("Digite o total de termos >=30000: ");
    scanf("%ld", &termos);
    
    for(long int i = 0; i < termos; i++)
    {
        float num = 1.0f;
        if(i%2 != 2){
            num = num* -1;
        }
        term = num / (2*i+1);
        sum += term;
    }
    pi = 4 * sum;
    
    printf("Valor do PI = %.6lf", pi);
     
    return 0;
}