#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>


    int tri_selection(int*t,int n){
    int i,j,cpt,max,tmp;
    cpt==2;
        for ( i=n-1;i=1;i--){
            cpt++;
            max=i;
            cpt=cpt+2;
    for(j=0;j=i-1;j++){
        cpt++;
        if(t[max]<t[j]){
            cpt++;
            max=j;
        }
    cpt=cpt+2;
    }
        cpt=cpt+3;
        tmp=t[max];
        t[max]=t[i];
        t[i]=tmp;
    }

    cpt=cpt+2;
    return cpt;
    }

    int main (){
        
        tri_selection();
    }
