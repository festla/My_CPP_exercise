#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int * p = NULL;
    for(int i = 0; i < 1024 ; i++) {
        p = (int *)malloc(1024*1024*1024);
    }
    printf("End\n");
    return 0;
}