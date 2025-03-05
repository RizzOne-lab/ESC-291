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



/* 
    Quick recap:
    Whole number variables: 
        - Declare int and input / output using "%d" format for each variable
        - Use "%d%d" for 2 variables input
        - Use "%d" for single variable output
        
    Write your program after this comment. In case of any doubt, review earlier program. */
#include<stdio.h>
    int main(){
        int x,y,c;
        
        scanf("%d",&x);
        scanf("%d",&y);
        
        c=x+y;
        
        printf("%d",c);
        
        return 0;
        }
        
        
        
        
      
        
        
      /* 
    Quick recap:
    Whole number variables: 
        - Declare int and input / output using "%d" format for each variable
        - Use "%d%d" for 2 variables input
        - Use "%d" for single variable output
        
    Write your program after this comment. In case of any doubt, review earlier program. */
#include<stdio.h>
    int main(){
       int a,b,c;
    scanf("%d%d",&a, &b);
    
    c = a*b;
    printf("%d",c);
    
    return 0;
    }





/* 
    Quick recap:
    Whole number variables: 
        Declare int and input / output using "%d" format for each variable
    Fractional variables:   
        Declare float and input / output using "%f" format for each variable
        
    Write your program below this line   */

#include<stdio.h>
    int main(){
    float a,b,A;
    
        scanf("%f",&a);
        scanf("%f",&b);
        
        A=a*b;
        printf("%f",A);
        
        return 0;
        }
        
