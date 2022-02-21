#include <stdio.h>
#include <stdlib.h>


void print_file(FILE *ftp){
    int c;
    rewind(ftp);
    while((c = getc(ftp)) != EOF)
    putc(c,stdout);
}

int main(int argc, char *argv[]){
    FILE *ifp;
    ifp = fopen(argv[1],"r+");

    print_file(ifp);
}