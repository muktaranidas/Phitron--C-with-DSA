#include<stdio.h>
int main (){
       long long int sum = 0;
       long long int i;
       int n;
       scanf("%d" , &n);
    for( i=1; i<=n; i=i+1){
         sum = sum+i;
    }
        printf("%lld\n", sum);
        return 0 ;

}

// (n*(n+1))/2