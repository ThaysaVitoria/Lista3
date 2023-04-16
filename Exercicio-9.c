#include <stdio.h>

int main()
{
    int num, n;
    
    for(n = 100; n < 201; n++){
        if(n % 2 != 0){
            printf("%d \n", n);
        }
    }
}
