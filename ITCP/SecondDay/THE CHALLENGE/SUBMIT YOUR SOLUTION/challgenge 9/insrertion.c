#include <stdio.h>
#include <stdlib.h>
int main(){

int a1[10],a2[10],a3[10];
int n,m,i,j,k,cpt;
printf("donner la taille de chaque tableaux\n");
scanf("%d%d",&n,&m);
    for ( i = 0; i < n; i++)
    {
        printf("donner valeur ce tab 1\n");
        scanf("%d",&a1[i]);
    }

    for ( j = 0; j < m; j++)
    {
        printf("donner valeur ce tab 2\n");
        scanf("%d",&a2[j]);
    }
    k=0;cpt=0;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if ( a1[i]==a2[j])
            {
                a3[k]=a1[j];
                k++;
                cpt++;
            }
            
        }
        
    }
    printf("intersection entre cett deux tab est:\n");
    for (k=0; k < cpt; k++){
        
        printf("%d",a3[k]);
    }
    
    return 0;
}