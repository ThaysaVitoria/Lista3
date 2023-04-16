#include <stdio.h>

int main()
{
    int n; 
    
    for(n = 1000; n < 2000; n++){
        printf("%d \n", n);
    }
    
    for(n = 1000; n < 2000; n++){
        if(n % 11 == 5){
            printf("%d \n", n);
        }
    }
}
