#include <stdio.h>

int main()
{
    int i1, i2, i3, i4, n;

    do{
        printf("Digite um número: ");
        scanf("%d", & n);
        
        if(n > 0 && n < 26){
            i1++;
        }
        if(n > 25 && n < 51){
            i2++;
        }
        if(n > 50 && n < 76){
            i3++;
        }
        if(n > 75 && n < 101){
            i4++;
        }
    } while(n >= 0);
    
    printf("A quantidade de 0 a 25 é %d\nA quantidade de 26 a 50 %d\nA quantidade de 51 a 75 %d\n A quantidade de 76 a 100 %d", i1, i2, i3, i4);
}


