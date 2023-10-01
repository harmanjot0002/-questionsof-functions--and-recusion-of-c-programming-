//  write a function to print table  where input is taken from user 

#include <stdio.h> 
// prototype declaration 
void table (int n );  // parameter / formal parameter  

// function call 
  int main ()
  { 
    int n ; 
    printf (" ENTER A NUMBER : "); 
    scanf ("%d",&n); 
    table (n); // actual parameter/ argument 
    return 0 ; 

  }
  // function definition 
 void table (int n ){  // parameter / formal paremeter
    for (int i=1 ; i<=10 ; i++ ) { 
        printf ("%d\n",i*n) ; 
    }

}