#include <stdio.h>
#include <stdlib.h>
 
int main(){
    float n;
    int c = 0;
    while (scanf("%f", &n) != EOF)
        if (n > 0)
            c++;
    printf("%d valores positivos\n", c);

        system ("pause");        
}
