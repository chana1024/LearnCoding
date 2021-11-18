#include <stdio.h>
void printBin(int n)
{
    int l = sizeof(n)*8;//总位数。
    int i;
    if(i == 0)
    {
         printf("0");
         return;
     }
    for(i = l-1; i >= 0; i --)//略去高位0.
    {
        if(n&(1<<i)) break;
    }
 
    for(;i>=0; i --)
        printf("%d", (n&(1<<i)) != 0);
    printf("\n");
}
int main(){
        int x = 0xFF;
        printf("%d\n",x);
        printf("%x\n",x);
        printBin(x);
        printf("%ld\n",sizeof(x));
        long y = ~0xFF;
        //printf("%d\n",y);
        //printf("%X\n",y);
        printf("%ld\n",sizeof(y));
        printBin(y);
        return 0;
}
