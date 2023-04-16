#include <stdio.h>

int main()
{
    int n, cont1, cont2, num;
    
    for(n = 1; n < 11; n++){
        
        printf("Informe 10 valores: ");
        scanf("%d", & num);
        
        if(num > 9 && num < 21){
            cont1++;
        }
        else{
            cont2++;
        }
    }
    printf("Estão dentro do intervalo %d \nEstão fora do intervalo %d", cont1, cont2);
}
