#include <stdio.h>
int main(){
    float a=7, b=8, c;
    char o='+';
    printf("Enter Number:- ");
    scanf("%f",&a);
    printf("Enter Number:- ");
    scanf("%f",&b);
    printf("Enter Number:- ");
    scanf(" %c",&o);

    if(o == '+'){
        c = a+b;
    }
    else if(o == '-'){
        c = a-b;
    }
    else if(o == '*'){
        c = a*b;
    }
    else if(o == '/'){
        c = a/b;
    }
    else {
        printf("Invalid Operator!\n");
        return 0;
    }

    printf("%f",c);
    
    return 0;
    



}

/*
cmd:
gcc chat.c -o chat.exe
./chat.exe
*/