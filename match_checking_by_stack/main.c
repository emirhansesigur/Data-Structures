#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

void pop()
{
    if(top == -1)
        printf("array is empty.");
    else{
        stack[top]='-'; // ilk ekemaninda - olursa arrayin bos oldugunu anlamak icin.
        top--;
    }
}


int isEmpty(char stack[]){
    if(stack[0]=='-'){
        return 1; // arrayde eleman kalmamis demek;
    }
    else return 0;
}


int balanced(char* e){

    while(1) // when == '\0' stack is empty return 1
    {
        char x;
        if(*e == '{' || *e == '(' ){
            push(*e);
        }

        else if(*e == '}'){
            x = stack[top];
            if(x=='{'){// e ile x yani bir onceki eleman eslesti demektir.
                pop();
            }
            else{ // diger tum durumlarda hatalı islem vardır.
                return 0; // hatalıdır ve programın calısmasına gerek yoktur.
            }
        }

        else if(*e == ')'){
            x = stack[top];
            if(x=='('){// e ile x yani bir onceki eleman eslesti demektir.
                pop();
            }
            else{ // diger tum durumlarda hatalı islem vardır.
                return 0; // hatalıdır ve programın calısmasına gerek yoktur.
            }
        }




        e++;

        if(*e == '\0'){ // basarıyla sona gelmisiz demektir.

            if(isEmpty(stack)){ // hepsi eslendiye stack bostur.
                return 1; // basarili
            }
            else return 0; // basarisiz.

        }

    }

    // bossa return 1 degilse 0
    // icerde hatalı old dolayı da 0 fırlatabilir.

}


int main()
{
    printf("(, ), {, } dont enter any character except those.\n");
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;

    if(balanced(e) == 1){
        printf("ordered.");
    }
    else{
        printf("unordered.");
    }
    return 0;
}
