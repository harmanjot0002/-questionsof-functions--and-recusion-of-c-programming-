// Write a function that prints Namaste if user is Indian
//& Bonjour if the user is French.

#include <stdio.h> 
//prototype declaration 
void namaste ();
void bonjour ();

// function call 
int main (){
    printf ("ENTER F FOR FRENCH AND I FOR INDIAN ");
    char ch ; 
    scanf ("%c",&ch);
    if(ch=='i'){
        namaste();
    } else {
        bonjour();
    }
 
    
    return 0; 
}

// function definition 
 void namaste (){
    printf ("NAMASTE\n");
 }
 void bonjour (){
    printf ("BONJOUR\n");
 }