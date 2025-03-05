1st-Code:

#include<stdio.h>
    int main(){
        int m;
        scanf("%d",&m);
        if(m>=40)
        printf("Passed");
        else if(m<40)
        printf("Failed");
        return 0;
        }

2nd-Code:

#include<stdio.h>
    int main (){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d",a);
    else
    printf("%d",b);
    
    return 0;
    }

3rd-Code:

#include<stdio.h>
    int main(){
    int a;
    scanf("%d",&a);
    if(a>0)
    printf("POSITIVE");
    else if(a<0)
    printf("NEGATIVE");
    return 0;
    }
