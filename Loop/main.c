#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        for(i=n;i>=1;i--){
            printf("%d\n",i);
        }
    }
    return 0;
}
