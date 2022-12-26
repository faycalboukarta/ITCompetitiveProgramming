#include <stdio.h>
#include <math.h>

int main (){
    int y,b;
    printf("donner moi une  annee \n");
    scanf("%d",&y);
    if ((y%4) == 0 )
    {
        if (( (y%100) != 0 ) || ( (y%400) !=  0 ))
        {
            printf("cett annee est un leap");
        }else{
            printf("cett annee n'est pas  un leap");
        }
        
    
    }else {
        printf("cett annee n'est pas  un leap");
    }
    return 0;
    
}