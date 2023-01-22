#include <stdio.h>
void main()
{
 int n;
 do{
    printf("Saisir un entier \n");
    scanf("%d",&n);
 }while(n<0);
 printf("%d",n);
}
