#include<stdio.h>
#include<string.h>
void fun(char *ar){
    printf("%d" , strlen(ar));

}
int main ()
{
    char ar[6] = "Hello";
    // int sz = sizeof(ar)/sizeof(char);
    // printf("%d" , sz);
    fun(ar);
    return 0;
}