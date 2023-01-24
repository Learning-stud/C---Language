#include<stdio.h>

void main(){

    int table;
    printf("Enter number: ");

    scanf("%d", &table);

    for (int i=1; i<=10; i++)
        {
        printf("%d x %d = %d\n", table, i, table*i);
        }

}