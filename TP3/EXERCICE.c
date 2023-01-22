#include <stdio.h>
void main()
{
float s,p;
int nbj,me,nbr;

 do{
    printf("Saisir le salaire \n");
    scanf("%f",&s);
 }while(s<0);
 do{
printf("combien de mois de travail");
scanf("%d",&nbr);
 }while(nbr<1);
 if (nbr>=12){
    p=s;
 }else{

 do{
 printf("quel est le mois d'embauchement ? \n");
 scanf("%d",&me);
 }while((me<1)||(me>12));
 if (me<3){
    p=s;
 }else{
 p=0;
 }
 }
 printf("combien de jours il etait absent ? \n");
 scanf("%d",&nbj);

 if (nbj<=10){
    p=p+p*0.5;
 }
printf("le prime = %f",p);
}
