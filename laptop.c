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
		printf("Telefonul nu are memorie\n");
	}
}

int main() {
	struct Laptop l1;
	l1 = initializare(1, 16, 200, 'A');
	afisare(l1);
	return 0;
}