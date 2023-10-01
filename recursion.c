  #include <stdio.h>
 void helloWorld(int count );

int main (){
    helloWorld(5);

    return 0 ; 
}      

//recursive function 
void helloWorld (int count ){
    if (count==0){ // base case 
        return; 
    }
    printf ("HELLO WORLD\n");
    helloWorld(count-1);
}