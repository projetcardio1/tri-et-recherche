#include <stdio.h>
#include <stdbool.h>

void swap(int *valeur1, int *valeur2){
int temp;
temp = *valeur1;
*valeur1 = *valeur2;
*valeur2 = temp;
}
int maximum(int tab[], int taille)
{
	int i = 0, indice_max = taille;

	while (i != taille)
	{
		if (tab[i] > tab[indice_max])
		{
			indice_max = i;
		}
		i++;
	}
	return indice_max;
}
int minimum(int tab[], int taille)
{
	int i = 0, indice_max = taille;

	while (i != taille)
	{
		if (tab[i] < tab[indice_max])
		{
			indice_max = i;
		}
		i++;
	}
	return indice_max;
}
void tri_selection(int tab[], int taille, int ordre)
{
	int res, taille2;
	taille2 = taille - 1;
	if (ordre == 0) {
		for (int i = 0; i < taille; i++)
		{
			res = maximum(tab, taille2);
			swap(&tab[res], &tab[taille2]);
			taille2--;
		}
	}
	else if (ordre == 1) {
		for (int i = 0; i < taille; i++) {
			res = minimum(tab, taille2);
			swap(&tab[res], &tab[taille2]);
			taille2--;
		}
	}
}
int main()
{
	int tab[10] = { 24,11,12,13,112,9,16,-2,4,200 };
	int taille = 10, menu;
	printf("tri ordre croissant = 0, ordre décroissant = 1\n");
	scanf("%d", &menu);
	tri_selection(tab, taille, menu);
	for (int i = 0; i < taille; i++)
	{
		printf("%d\n", tab[i]);
	}
	return 0;
}
