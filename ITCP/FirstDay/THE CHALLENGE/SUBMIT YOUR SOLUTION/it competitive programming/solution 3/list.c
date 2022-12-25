#include<stdio.h>
#include<stdlib.h>


struct data
{
    int val;
    struct data * suiv; 
};

typedef struct data * list;


list create(){
    list p= (list) malloc(sizeof(struct data));
    p->suiv=0;
    p->val=0;
    return p;
}

void freeList(list l){
    free(l);
}

void AffVal(list l,int val){
    l->val=val;
}

void AffSuiv(list l, list suiv){
    l->suiv=suiv;
}

int getVal(list l){
    return l->val;
}

list getSuiv(list l ){
    return l->suiv;
}

int isNull(list l ){
    if(l==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    /*
    هذا مثال على إستعمال 
    list
    قراءة سلسلة أرقام تصاعديا 
    و إعادة إظهارها 
    */

    list l  ;
    
  
    int x= 0,old=-1;

    list q,p=0 ;
    
    printf("%d",isNull(p));
    
    while (x >old)
    {      
        old=x;
        printf("\ngive a nmbr > %d : ",x);
        scanf("%d",&x);
        p= create();
        
        if(x>old){
            if(isNull(l)){
                l=create();
                AffVal(l,x);
                q=l;
            }else{
                p= create();
                AffVal(p,x);
                AffSuiv(q,p);
                q=p;
                p=0;
            }
        /* code */
        }
    }
    p=l;

    while (!isNull(p))
    {
        printf(" %d ",getVal(p));
        p=getSuiv(p);
        /* code */
    }
    

    freeList(l);
    
    return 0;
}