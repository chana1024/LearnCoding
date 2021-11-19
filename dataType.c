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
int eq(int x,int y){
    return !(x^y);
}
int main(){
        int x = 0xFF;
        printf("%d\n",x);
        printf("%x\n",x);
        printBin(x);
        printf("%ld\n",sizeof(x));
        long y = ~0xFF;
        printf("%ld\n",y);
        printf("%lX\n",y);
        printf("%ld\n",sizeof(y));
        printBin(y);
        int a=1;
        int b=1;
        printf("%d",eq(a,b));
        return 0;
}
