#include <stdio.h>
#include<string.h>
#include<ctype.h>

 struct stack1{
    char t[100];
    int top;
};

typedef struct stack1 s;

void push(s *s1, char x){
    if(s1->top!=99){
        s1->top=s1->top+1;
        s1->t[s1->top] = x;
    }
}

char pop(s *s1){
    if(s1->top!=-1)
        return s1->t[s1->top--];
}



int main(void){
    int t;
    // scanf("%d", &t);
    scanf("%d", &t);
    
    
    while(t--){
       
    
    s s1;
    char str[20];
    char output[20];
    s1.top=-1;
    // printf("Enter an exp ");
    // scanf("%s", x);a()
    int index = -1;
    gets(str);
    //printf("%s",&str);
    int len = strlen(str);
    for(int i = 0; i<len; i++){
        if(str[i]=='('){
            push(&s1, str[i]);
            //printf("pushed");
        }
        else if(isalpha(str[i])){
            output[++index]= str[i];
            //printf("%s",&output);
        }
        else if(str[i]==')'){
             while(s1.t[s1.top]!='('){
                output[++index] = pop(&s1);
                //printf("%s",&output);
             }
             pop(&s1);
        }
        else
            push(&s1, str[i]);
    }
    while(s1.top>=0){
        output[++index] = pop(&s1);
    }
    
    printf("%s\n", output);
    // t--;
    }
    // return 0;
}
