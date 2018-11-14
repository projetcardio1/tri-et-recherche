#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int temps, taille, gauche, droite, middle;
    bool trouve = false;
    int tab[10] = { 100,200,300,400,500,600,700,800,900,1000 };
    printf("A quel temp recherchez vous la valeur\n");
    scanf("%d",&temps);
gauche = 0;
droite = 9;
while(trouve != true && gauche <= droite){
middle = (gauche + droite) / 2;
if (tab[middle] == temps){
    trouve = true;
}else{
if(temps > tab[middle]){
    gauche = middle + 1;
}else{
droite = middle - 1;
}
}
}
if(trouve == true){
    printf("la valeur %d est au rang %d", temps, middle);
}else{
printf("la valeur %d n'est pas dans tableau", temps);
}
}
