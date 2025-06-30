/* its a boiler plate code for C we have to write code under the main function 
# include <stdio.h>
int main(){
    
    return 0;
}

for compile the code i need to write 

1. gcc -o filename filename.c
2. ./filename

*/

# include <stdio.h>
int main(){
    // after line end need to add ';' 
    // we print code by 'printf'
    printf("krish");
    // to move in the next line need to use \n its called escape seqeunce
    printf("is a Top G\n");
    printf("Just joking\n");
    // variables and their Declaration
    /*
    int x; //creat a varibale that is empty. its claeed declaration
    x = 4; // its content 4 now. its claeed initialization
    */ 
   int x = 50; // its called declaration & initialization
    // to print number in C
    // print("%d" , variable name)
    // here %d  is a format specifier
    printf("%d\n" , x); 
    //                               Operator
    // so print more variable in one line 
    int y = 6;
    printf("%d %d" , x,y );
    // here 1st "%d" is refer the x and 2nd "%d" is refer the y 
    // operation betwwen int return int always
    printf("\n");
    printf("\n");
    printf("%d\n" , x + y);
    printf("%d\n" , x - y);
    printf("%d\n" , x * y);
    printf("%d\n" , x / y);
    // for float we use %f as a format specifier for float
    float a = 5;
    float b = 6;
    printf("%f\n" , a+b); //its content result of float
    return 0;
    // "return 0 ;" its finish the code 
}