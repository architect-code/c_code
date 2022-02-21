#include <stdio.h>

void printarray(int data[], int num){
    int i;
    for(i=0;i<num;i++){
        printf("%d\t",data[i]);
    }
    printf("\nend of array\n");
}

void swap(int *i, int *j){
    // printf("\nintitial pat %d, %d",i,j);
    int temp;
    temp= *i;
    *i=*j;
    *j=temp;
    // printf("\nfinal pat %d, %d, %d\n",i,j,temp);
}

void bubble_sort(int data[],int num){
    int i,j;
    for(i=(num-1);i>1;i--){
        for(j=0;j<i;j++){
            if (data[j]>data[j+1]){
                swap(&data[j],&data[j+1]);
            }
            
        }
        printarray(data,num);
    }
}

int main(){
    int grade[] = {22,33,88,23,11,44};
    printarray(grade,6);
    bubble_sort(grade,6);
}