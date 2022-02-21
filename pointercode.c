#include <stdio.h>

void swap(int i, int j){
    printf("\nintitial pat %d, %d",i,j);
    int temp;
    temp=i;
    i=j;
    j=temp;
    printf("\nfinal pat %d, %d\n",i,j);
}

void swapref(int *i, int *j){
    printf("\nintitial pat %d, %d",i,j);
    int temp;
    temp= *i;
    *i=*j;
    *j=temp;
    printf("\nfinal pat %d, %d, %d\n",i,j,temp);
}

int main(){
    printf("pointer for an integer\n");
    int a=5;
    int *p = &a;
    printf("&a =  %lu, a = %lu,  p = %lu,  *p = %lu, &p = %lu\n",&a,a,p, *p, &p);
    int c = 10;
    printf("address of a %lu,  address of c %lu",&a,&c);
    printf("\n\n");
    printf("a = %d, c = %d\n",a,c);
    swap(a,c);
    printf("a = %d, c = %d",&a,&c);
    swapref(&a,&c);
    printf("a = %d, c = %d",&a,&c);
    printf("\n\n");
    char *pit = "ypllo";
    printf("*pit = %c,  pit = %s",*pit,pit);
    printf("\n\n");
    char tt = 'a';
    char *rit = &tt;
    printf("*rit = %c,  rit = %d",*rit,rit);
}