3rd-Code:

#include<stdio.h>
    int main()
    {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cnt++;
        }
        if(cnt==2)
           printf("PRIME");
        else
           printf("NOT A PRIME");
        return 0;
        }

2nd-Code:

  #include<stdio.h>
    int main(){
    int n,j;
    scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(j=1;j<=i;j++)
                printf("%d ",j);
               printf("\n");
                }
                return 0;
                }

1st-Code:

  #include<stdio.h>
    int main(){
    int n,rev;
    scanf("%d",&n);
    while(n>0){
        rev=n%10;
        printf("%d",rev);
        n=n/10;
        }
        return 0;
        }
