#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Laptop
{
	int id;
	int* memorie;
	float pret;
	char serie;
};

struct Laptop initializare(int id, const int* memorie, float pret, char serie)
{
	struct Laptop l;
	l.id = id;
	l.memorie = (int*)malloc(sizeof(int));
	*(l.memorie) = memorie;
	l.pret = pret;
	l.serie = serie;
	return l;

}

void afisare(struct Laptop l) {
	if (l.memorie != NULL)
	{
		printf("id: %d, memorie: %d, pret: %5.2f, seria:%c \n",
			l.id,*(l.memorie), l.pret, l.serie);
	}
	else {
		printf("Laptopul nu are memorie\n");
	}
}

void modificaPret(struct Laptop* l, float noulPret)
{
	if (noulPret > 0) {
	l->pret = noulPret;
	}
	else {
		printf("Pretul nu poate fi negativ\n");
	}
}

void dezalocare(struct Laptop* l) {
	if (l->memorie != NULL) {
		free(l->memorie);
	}
	l->memorie = NULL;

}

int main() {
	struct Laptop l1;
	l1 = initializare(1, 16, 200, 'A');
	afisare(l1);
	modificaPret(&l1, 250);
	afisare(l1);
	dezalocare(&l1);
	afisare(l1);

	return 0;
}