#include <stdio.h>

int main(int){
    int A, B;
    scanf("%d %d", &A, &B);
    if(A>B){
        printf(">");
    }
    else if(A<B){
        printf("<");
    }
    if(A==B){
        printf("==");
    }
}