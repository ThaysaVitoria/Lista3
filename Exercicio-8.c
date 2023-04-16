#include <stdio.h>

int main()
{
    int n, cont;
    float media;
    
    for(n = 13; n < 74; n++){
        if(n % 2 == 0){
            media += n;
            cont++;
        }
    }
    printf("A média é: %g", media = media / n);
}
