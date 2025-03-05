1st-Code:

#include<stdio.h>
    int main(){
       
        for(int i=1;i<=10;i++){
        printf("Hello\n");
        }
        return 0;
        }

2nd-Code:

#include<stdio.h>
    int main(){
        int n;
        int i;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
        printf("%d ",i);
        }
        return 0;
        }

3rd-Code:

/* Include header file */
#include<stdio.h>

int main() {
    int i, n, num, sum=0;
    scanf("%d",&n);    // Input n

    for (i=0; i<n; i++) {   // Loop n times
        scanf("%d",&num);  // Input number
        sum+=num;  // add sum with num
    }

    printf("%d",sum);     // Display sum

    return 0; // return
}

4th-Code:

#include<stdio.h>
    int main(){
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<2*n;i++){
        if(i%2!=0){
                printf("%d ",i);
                }
               }
               return 0;
               }
