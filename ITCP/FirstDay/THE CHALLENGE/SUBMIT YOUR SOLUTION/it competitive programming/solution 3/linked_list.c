#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct maillon{
    int val;
    struct maillon* suiv;
}maillon;

typedef struct maillon*liste;

liste allouer(){
        return ((liste) malloc(sizeof(maillon)));
    }

void libirer(liste p){
        free(p);
    }
void aff_val(liste p ,liste q){
    p->val =q;
}   

void aff_suiv( liste p,liste q){
        p-> suiv=q;
    }

int valeur(liste p){
        return (p->val);
    }

    liste suivant(liste p){
    return (p->suiv);
    }


void linked_liste ( liste *l ){
    int x; liste p,precp;
    
    if (l != NULL)
    {
        p=l;
        x=valeur(l);
        while (p != NULL )
        {
            x=valeur(l);
            if (valeur(p)==valeur(suivant(p)))
            {
                precp = p;
                p=suivant(p);
                aff_suiv(precp,suivant(p));
                libirer(p);
                p=suivant(precp);
                
            }
            
        }
        
    
    }
    printf("%d",l);
    while ( l != NULL )
    {
        printf("%d",valeur(l));
    }
    
};

int main(){
    liste l,p,q;
    int x;

    for (size_t i = 0; i < 5; i++)
    {
        if (l = NULL ){
            allouer(p);
            printf("donner une valeur\n");
            scanf("%d",&x);
            aff_val(p,x);
            aff_suiv(p,l);
            l=p;
        }else{
            q=p;
            allouer(p);
            printf("donner une valeur\n");
            scanf("%d",&x);
            aff_val(p,x);
            aff_suiv(q,p);
        }
    }
    

    linked_liste(l);
    return 0;
}