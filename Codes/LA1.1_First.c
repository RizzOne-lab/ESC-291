/* 
    Variable is like a pocket where value can be stored.
    
    Whole number variables (also known as integer): 
        - Declare int and input/output using "%d" format for each variable
*/

#include <stdio.h>
int main() {
    /* Declare variable x */
    int x, y;
    
    /* Scan input from keyboard buffer and store at x. Note & symbol meaning "at" */
    scanf("%d", &x);       
    
    /* Populate y as x multiplied by 2. Use * operator to multiply */
    y = x*2;
    
    /* Display variable y */
    printf("%d",y );  
    
    return 0;
}
