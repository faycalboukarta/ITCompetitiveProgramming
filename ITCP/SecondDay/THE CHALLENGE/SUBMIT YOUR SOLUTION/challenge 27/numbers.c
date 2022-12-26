#include <stdio.h>
#include <math.h>

int main(){
    int a,b,s,d;
    printf("donnes les deux nombres\n");
    scanf("%d%d",&a,&b);
    s=a+b;
    if (s < 100)
    {
        printf("true");
    }else
    {
        printf("false");
    }
    
    return 0;
}