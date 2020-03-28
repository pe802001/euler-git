#include <stdio.h> 
#include <stdlib.h> 
double find_k(int); 
int is_prime(int); 
double Euler(int); 
int main(void) 
{ 
    printf("Euler(10)=%f\n",Euler(10)); 
    printf("Euler(100)=%f\n",Euler(100));
    printf("Euler(1000)=%f\n",Euler(1000)); 
    printf("Euler(10000)=%f\n",Euler(10000));  
    
    system("pause"); 
    return 0; 
} 

double Euler(int n) 
{ 
  int num=0,p=3; 
  double result=1.0; 
  while(num<n) 
  { 
        if(is_prime(p)) 
         {result*=p/find_k(p); num++;} 
         
         p++; 
  } 
   return result*2; 
} 

double find_k(int n) 
{   
   if((n-1)%4==0) 
     return n+1; 
   else 
     return n-1; 
} 

int is_prime(int num) 
{   
   int i; 
   for(i=2;i<=num/2;i++) 
       if(num%i==0) 
        return 0; 
   return 1; 
} 

