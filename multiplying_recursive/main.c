#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b){
    if(b>0){
        return a + multiply(a, b-1);
    }

    else if(b==0){
        return 0;
    }
    else{
        return -a+multiply(a, b+1);
    }
}

int main()
{
    printf("%d", multiply(5,3));

    return 0;
}



