#include <stdio.h>
#include <math.h>

int main (){
    int x1,x2,y1,y2,s,a,b;
    printf("donner les valeur x1 et x2\n");
    scanf("%d%d",&x1,&x2);
    printf("donner les valeur y1 et y2\n");
    scanf("%d%d",&y1,&y2);
    a=pow( x1-x2);
    b=pow(y1-y2);

    s=sqrt( a + b );
    printf("la distance est%d",&s);
}