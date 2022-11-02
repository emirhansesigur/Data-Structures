#include <stdio.h>
#include <stdlib.h>
// bi linklist

void binary(int number){
    if(number==0){
        printf("%d", number%2);
    }
    else{
        binary(number/2);
        printf("%d", number%2);
    }
}
int main()
{
    binary(11);
    return 0;
}

