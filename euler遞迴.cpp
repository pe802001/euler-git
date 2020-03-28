#include <stdio.h> 
#include <stdlib.h> 

double Euler(int n)
{
       int i, a, k = 3 ;
       double num;
           a = 2 ;
           while ( a < k ) 
           {
                 if ( k % a != 0 ) a++ ;
                 else 
                 {
                      k++ ;
                       a = 2 ;
                 }
           }
           if ( ( k + 1 ) % 4 == 2 ) num = num * k / ( k+1 ) ;
           else if ( ( k - 1 ) % 4 == 2 ) num = num * k / ( k-1 ) ;   
        
       return num ;
}

double fib(int n)
{
    if(n>0)
    return 2*Euler(n-1);
    else
    return 2;
    }
        
int main(void) 
{ 
    printf("fib(10)=%f\n",fib(10)); 
    printf("fib(100)=%f\n",fib(100)); 
    printf("fib(1000)=%f\n",fib(1000)); 
    printf("fib(10000)=%f\n",fib(10000)); 

    system("pause"); 
    return 0; 
} 
