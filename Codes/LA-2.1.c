/*** Modify below incomplete program ***/

/* Include necessary library */

#include<stdio.h>
/* Declare main function  */
int main() {
        /*  Declare f and c as float variables where
            f: Fahrenheit, c: Celsius   */
            float f, c;
            

        /* Input f value */
        scanf("%f",&f);


        /* Use formula to derive celsius value: c = (f-32) * 5 / 9   */
        c= (f-32)*5/9;
       

        /* Display c with "%.2f" */
        printf("%.2f",c);

        return 0;
}


#include<stdio.h>
    int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    
    c=a%b;
    printf("%d",c);
    
    return 0;
    }

/* Include necessary library */
#include<stdio.h>
/* Declare main function. Place curly brackets {} properly */
int main(){ 
        /*  Declare n and rem as integer variable where
            n: number, rem: remainder */
            int n, rem;

        /* Input n value */
        scanf("%d",&n);

        /* Calculate remainder of n and 2 with n % 2  */
        rem=n%2;
        /* % is called modulo operator in Mathematics */

        /* Display "EVEN" when rem == 0, else display "ODD"
        */
        if (rem == 0){
        printf("EVEN");
        }
        else{
        printf("ODD");
        }
       
        
       

        return 0;
        }
