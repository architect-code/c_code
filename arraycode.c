#include <stdio.h>

int main(){
    int a = 5;
    int *k = &a;
    char *str = "yolo";
    int *r = (int []){22,55,77};
    printf("\n%s\n",str);
    printf("%d\n",r);
    
    int grade[5] = {12,12,33,44,55};
    int *p = &grade[0];
    int *d = &grade[4];
    int *e = &grade[6];
    printf("%lu     %lu     %lu    %lu    %lu",p,e,d,grade,grade+6);
    printf("\n\n %lu   %lu  %lu   %lu",a,&a,k,*k);
    return 0;
}