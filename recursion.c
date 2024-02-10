#include <stdio.h>
#include<string.h>
char* f(int N)
{
    char *ans[36];
    if (N == 0)
        return "a";

    if (N == 1)
        return "b";

    if (N == 2)
        return "c";
    // *ans = f(N-1)+f(N-2);
    char sol[36];
    for(int i =0; i<36; i++){
        sol[i] = f(N-1);
    }
    // +*f(N-2)+*f(N-3);
    // return strcat(f(N-1), strcat(f(N-2), f(N-3)));
    return *ans;
}

int main(void){
    int n , k;
    scanf("%d", &n);
    scanf("%d", &k);
    char* ans = f(n);
    
    printf("%s", ans);

    
}