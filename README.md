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

# 2022c
# Week08
##
step01-1
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
           if( k<= n-i ) printf(" ");
           else printf("*");
        }
        printf("\n");
    }
}
##
step01-2
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i=1;
    while(i<=n){
         int k=1;
         while(k<=n){
             if( k<=n-i ) printf(" ");
             else printf("*");
             k++;
         }
         printf("\n");
         i++;
    }
}
##
step01-3
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d",&n);

    int bad=0;
    for(int i=2; i<n; i++){
        if( n%i==0 ) bad=1;

    }
    if(bad==0) printf("%d是質數(沒有壞掉)", n);
    else printf("%d 不是質數(早就壞掉了)", n);

}
##
step01-4
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int n=2; n<=a; n++){
        int bad=0;
        for(int i=2; i<n; i++){
            if(n%i==0) bad=1;
        }
        if(bad==0) printf("%d ", n);
    }
}
