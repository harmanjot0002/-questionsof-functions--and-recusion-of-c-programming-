// write a function to print Hello and Goodbye 


#include <stdio.h> 
// prototype declaration 
void Hello() ;
void goodbye(); 

// function call 
int main () {
     Hello();
     goodbye ();
    return 0;

}
// function definition 
void Hello (){
    printf ("Hello\n");
}
void goodbye (){
    printf ("Goodbye \n");
}