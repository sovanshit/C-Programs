#include<stdio.h>
int add(int a, int b);
int main(){
    int a,b,addRes=0;
    scanf("%d%d",&a,&b);
    addRes = add(a,b);
    printf("%d",&addRes);
}
int add(int a, int b){
    return a+b;
}