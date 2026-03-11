#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



struct Telefon {
	int id;
	int RAM;
	char* producator;
	float pret;
	char serie;
};

struct Telefon initializare(/*parametri necesari */ int id, int ram, const char* producator, float pret, char serie)
{
	struct Telefon t;
	t.id = id;
	//initializare structura
	t.RAM = ram;
	t.producator = (char*)malloc(sizeof(char)*(strlen(producator)+1));
	strcpy_s(t.producator, strlen(producator) + 1, producator); //  unde copiez destinatia , cate caractere si sursa de unde copiez
	t.pret = pret;
	t.serie = serie;
	return t;

}

void afisare(struct Telefon t)
{
	
	//afisare structura
	printf("%d.Telefonul %s seria %c are %d gb RAM si costa %5.2f RON.\n",
		t.id, t.producator, t.serie, t.RAM, t.pret);
}

void modifica_Atribut(struct Telefon t) 
{
//modificarea unui atribut

}

void dezalocare ( struct Telefon t) 
{

	//dezalocare structura
}

int main() {
	struct Telefon t;
	t = initializare(1, 4, "Samsung", 3000.5, 'A');    // ghilimele folosesc doar pentru sir de caractere
	afisare(t);
	return 0;

}