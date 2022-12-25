#include <stdio.h>
#include <math.h>

int main(){
    int x;
    int t1[10] , t2[10];
    int i,j,n,m;
    printf("donner la taille de t1 et t2\n");
    scanf("%d%d",&n,&m);

    for ( i = 0; i < n; i++)
    {
        printf ("donner le %d eme nombre de t1\n",i+1);
        scanf("%d",&t1[i]);
        
    }
    for ( j= 0; j < m ; j++)
    {
        printf ("donner le %d eme nombrede t2\n",j+1);
        scanf("%d",&t2[j]);
        
    }
    i=0;
    j=0;
    for ( i=0 ; i < n; i++){
        for ( j=0 ; j < m; j++)
        {
            if (t1[i]>t2[j])
            {
                x= t1[i];
                t1[i]=t2[j];
                t2[j]=x;
            }
            

        }
        
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d",&t1[i]);
        printf("%d",&t2[j]);
    }
    

}