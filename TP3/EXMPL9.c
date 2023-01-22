#include <stdio.h>
void main()
{
 int m,n;

     printf("Saisir le 1er entier \n");
    scanf("%d",&m);
 do{
    printf("Saisir le  2eme entier \n");
    scanf("%d",&n);
 }while(n==0);
 printf("%d / %d = %f",m,n,(float)m/n);
}
