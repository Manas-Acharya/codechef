#include <stdio.h>
struct stack {
    char arr [1000];
    int top;
};
void push (struct stack *a, char x)
{
    a->arr[++a->top]=x;
}
char pop (struct stack*a){
    return a->arr[a->top--];
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--!=0){
        struct stack st;
        st.top=-1;
        char str[1000];
        scanf("%s",str);
        int i=0;
        while(str[i]!='\0'){
            if(str[i]>='a' && str[i]<='z')printf("%c",str[i]);
            else if(str[i]==')'){
                char c=pop(&st);
                printf("%c",c);
                c=pop(&st); //remove (
            }
            else push(&st,str[i]);
            i++;
        }
        printf("\n");
    }
        
    return 0;
}

