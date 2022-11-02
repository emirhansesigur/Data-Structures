#include <stdio.h>
#include <stdlib.h>

void reverse(){
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    if(x==0){
        return;
    }
    else{
        reverse();
        printf("%d", x);
    }
}

int main()
{

    reverse();

    return 0;
}
