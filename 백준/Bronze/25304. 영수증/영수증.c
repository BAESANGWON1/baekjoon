#include <stdio.h>

int main(int){
    int X, N, a, b, i, price=0;
    scanf("%d", &X);
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d %d", &a, &b);
        price+=a*b;
    }
    if(price==X){
        printf("Yes");
    }
    else printf("No");
    
    
    
    
    
}