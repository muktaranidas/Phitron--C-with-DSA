// #include<stdio.h>
// int main ()
// {
//     int n,k=1;
//     scanf("%d" , &n);
//     for(int i=1; i<=n; i++){  //line
//          //kaj  start
//        for(int j=1; j<=k; j++){
//         printf("*");
//        }
//         //kaj end   
//         k++;
//         printf("\n");
  
//     }
//     return 0;
// }

#include<stdio.h>
int main ()
{
    int n,k=4;
    scanf("%d" , &n);
    for(int i=1; i<=n; i++){  //line
         //kaj  start
       for(int j=1; j<=k; j++){
        printf("*");
       }
        //kaj end   
        k--;
        printf("\n");
  
    }
    return 0;
}