#include <stdio.h>
#include <math.h>
 int main(){
    int n,i,d;
    printf("donner la valeur de n\n");
    scanf("%d",&n);
    d=1; 
    for ( i=2; i<= n/2; i++){
        if ( n%i==0 ){
            d=0;
            break;
        }
    }

    if ( d=1){
        printf("le nobre %d est premier",n);
    }else{
        printf("cett nomnre n'est pas premier");
    }
    return 0;
 }