#include <stdio.h>

int main(void){

    int t;
    scanf("%d", &t);
    int a, b;
    scanf("%d %d",&a,&b);
    int max = (a>b)?a:b;
    int lcm = 0;
    while (1)
    {
        if((max%a==0)&&(max%b==0))
        {   lcm = max;
            break;  
            }
        ++max;
    }
    int gcd = (a*b)/lcm;
    printf("%d %d", gcd, lcm);
    

}