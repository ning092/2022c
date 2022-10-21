# 2022c
# Week07
##
step01-1
#include <stdio.h>
int main()
{
    int n=1234567812345678;
    printf("%d\n", n);
    long long int a=1234567812345678;
    printf("%lld\n", a);

}
##
step01-2
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%dlld%lld", &a, &b);
    long long int ans;
    for(long long int i = 1; i<=a; i++){
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("答案是:%lld\n",ans);
}
##
step01-3
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld", &a, &b );

    while(1){
        c = a%b;
        printf("%lld %lld %lld\n", a, b, c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}
##
step01-4
#include <stdio.h>
int main()
{
    int n=1234;

    while( n>0 ){
        printf("個位數是%d\n", n%10 );
        n = n /10;
    }
}

