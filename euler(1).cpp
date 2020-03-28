#include <stdio.h> 
#include <stdlib.h> 

double Euler(int n)
{
       int i, a, k = 3 ;
       double num = 2.0 ;
       for ( i = 0 ; i < n ; i++ ) 
       {
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
           k++ ;
       } 
       return num ;
}        
int main(void) 
{ 
    printf("Euler(10)=%f\n",Euler(10)); 
    printf("Euler(100)=%f\n",Euler(100)); 
    printf("Euler(1000)=%f\n",Euler(1000)); 
    printf("Euler(10000)=%f\n",Euler(10000)); 

    system("pause"); 
    return 0; 
} 
