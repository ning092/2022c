#include <stdio.h>
int n=30;
int funcA(int a, int b)
{
    printf("funA()��a,b�O:%d %d\n", a, b);
    return a+b;
}
int funcB(int n)
{

    printf("funB() �� n �O:%d\n", n);
    int ans = funcA(n, n);
    return ans;

}
int main()
{
    int a=10, b=20;
    funcB(b);
    funcA(a,b);
    printf("main()��a,b�O:%d %d\n", a, b);
}
