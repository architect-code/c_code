#include <stdio.h>

int print_array(int size,int a[]){
    int i;
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}

int main(){
    int key[] = {1,2,3,4,5,6};
    print_array(4,key);
}