#include<stdio.h>
void main()
{
  int n;
  printf("entrez un entier \n");
  scanf("%d",&n);
  switch(n)
  {
      case 0:printf("ZERO");break;
      case 1:printf("UN");break;
      case 2:printf("DUEX");break;
      default:printf("Autre");
  }
}
