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

void merge(int data1[], int size1, int data2[], int size2, int merged[]){
    // int merged[size1 + size2];
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(data1[i]<data2[j]){
            merged[k++] = data1[i++];
           
        }
        else{
            merged[k++]=data2[j++];
       
        }

        // printarray(merged,(size1+size2));
    }
    
    while(i<size1){
        merged[k++] = data1[i++];
    
        // printarray(merged,(size1+size2));
    }

    while(j<size2){
        merged[k++] = data2[j++];
   
        // printarray(merged,(size1+size2));
    }
//   printarray(merged,(size1+size2));
}

void merge_sort(int data1[], int n){
   
       int i = 0, k=0 ;
       int w[n];
    for(i = 1; i<n ; i*=2){
        for(k = 0; k<n-i; k+=2*i){
            merge(data1+k,i,data1+k+i,i,w+k);
        }
        for(k=0;k<n;k++){
            data1[k]=w[k];
        }
        printarray(data1,n);
    }

}


int main(){
    int grade[] = {22,33,88,23,11,44,4,99,221};
    int final_grade[10] = {0};
    // printarray(grade+2,4);
    merge_sort(grade,16);
    // printarray(grade,6);
    // bubble_sort(grade,6);
    // int grade2[] = {1,2,66,77};
    // merge(grade,6,grade2,4,final_grade);
}