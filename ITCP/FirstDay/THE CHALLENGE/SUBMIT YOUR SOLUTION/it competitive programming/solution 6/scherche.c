#include <stdio.h>
#include <math.h>



int main(){
    int n ,i,v,pv;
    int t[n];

    printf("donner la taille de la table\n");
    scanf("%d",&n);

    printf("donner la valeur de v");
    scanf("%d",&v);
    for ( i = 0; i < n; i++)
    {
        printf("donner la %d valeur\n",i);
        scanf("%d",&t[i]);
    }

    pv=-1;
    while(pv==0 && i<n ){
        if (v==t[i])
        {
            pv=i;
        }
        i++;
    }

    return pv;

}