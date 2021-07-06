#include <stdio.h>
#include <stdlib.h> 

int main(void){
    int m,x;
    scanf("%d",&x);
    if(x%2==0)
        x=x+1;
    else
        x=x;
    printf("%d\n",x);
    for(m=1;m<=5;m++)
    printf("%d\n",x+=2);
    return 0;
}
