#include <stdio.h>
#include <math.h>

int add(int a,int b){
    int s;
    s = a+b;
    return s ;
}
int main(){
    int a,b,d;
    printf("donnes les valeurs a et b\n");
    scanf("%d%d",&a,&b);
    d =add(a,b);
    printf("%d",d);
    
}