#include<stdio.h>

void main()
{
  int n;
  printf("entrez un entier \n");
  scanf("%d",&n);

  switch (n)
  {
      case 1:printf("Lundi");break;
      case 2:printf("Mardi");break;
      case 3:printf("Mercredi");break;
      case 4:printf("Jeudi");break;
      case 5:printf("Vendredi");break;
      case 6:printf("Samedi");break;
      case 7:printf("Dimanche");break;
      default:printf("Autre");
  }

}
