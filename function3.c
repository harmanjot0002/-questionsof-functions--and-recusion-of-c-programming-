// print sum of two integers through functions


#include <stdio.h>
// prototype declaration 
int sum (int a,int b); 

// function call 
int main ()
{ int a , b ; 
printf (" enter first number : "); 
scanf ("%d",&a ); 
printf (" enter second number : ");           
scanf ("%d",&b );

 int s = sum(a,b);
 printf ("sum is : %d \n",s); 
    return 0 ; 
}
// function definition 
int sum (int a , int b ){
   return a+b  ;
}