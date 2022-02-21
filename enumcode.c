#include <stdio.h>

enum day {sun, mon, tue};

void print_day(enum day d){
    switch(d){
        case sun: printf("Sunday"); break;
        case mon: printf("Monday");break;
        case tue: printf("tuesday"); break;
        default: printf("not a valid day");
    }
}

int main(){
    enum day today = sun;
    print_day(today+1);
}