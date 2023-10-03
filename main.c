#include <stdio.h>

void swap(int *a,int *b){
    int troca=*a;
    *a=*b;
    *b=troca;
}

int main()
{
    int val1,val2;
    printf("Digite um valor:\n ");
    scanf("%d",&val1);
    printf("Digite um valor:\n ");
    scanf("%d",&val2);
    swap(&val1,&val2);
    printf("Hello World %d %d",val1,val2);
    return 0;
}
