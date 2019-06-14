#include <stdio.h>
#include <string.h>
#define MAX 100 /*maximum no. of characters*/

int top=-1;
char item;
char stack_string[MAX];

void pushChar(char item){
    top=top+1;
    stack_string[top]=item;
}
char popChar(){
    item = stack_string[top];
    top=top-1;
    return item;
}

int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
int isFull(){
    if(top==MAX-1)
        return 1;
    else
        return 0;
}


int main(){
    char str[MAX];
    int i;

    printf("Input a string: ");
    scanf("%[^\n]s",str); /*read string with spaces*/

    for(i=0;i<strlen(str);i++)
        pushChar(str[i]);

    for(i=0;i<strlen(str);i++)
        str[i]=popChar();

    printf("Reversed String is: %s\n",str);
    return 0;
}
