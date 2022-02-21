#include <stdio.h>

int main(){
    int i=5;
    int j=6;
    int k=7;


    {
        int i= 22;
        j=55;
        int l = k+11;
        printf("%d %d %d %d",i,j,l,k);
        printf("\n******\n");
    }

    {
        printf("%d %d %d",i,j,k);
        // int l=555;
        printf("\n******\n");
    }

    printf("%d %d %d",i,j,k);
    printf("\n******");

    return 0;
}