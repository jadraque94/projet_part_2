#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int creer_utilisateur(char Fichier[]) {
	FILE *f;
	int lire;
	ouvrir(&f, Fichier);
	Compte Compte;
	printf("\n\nAjouter un nouveau client..............: A\n");
	printf("numéro de compte :");
	scanf("%d", &Compte.numero);
	lire=fwrite(&Compte,sizeof(Compte),1, f);
	if (lire==0) {
		fseek(f, -1l* sizeof(Compte), SEEK_CUR);
	return 1;
	}
	return 0;
}

int compte_de(char fichier){
	FILE *f;
	int renvoi;
	Compte Cpt;
	printf(" numero de compte : \n ");
	scanf("%d", numero);
	fseek(f, 0, SEEK_SET);
	while (fread(&Cpt, sizeof(Compte), 1, f) != 0 && renvoi!= 0) {
		if (Cpt.numero== numero){
			printf("Numéro de compte de %d: %s\n", Cpt.numero,Cpt.nom);
		}
	if (renvoi != 0) {
		printf("Ce nom n'existe pas\n");
	}
	}
	return(0);
}

float solde_de(char fichier, Date) {
	FILE *f;
	Compte cpt;
	Date Date;
	rewind(fichier);
	printf("Listage du solde de compte n");
	printf("Numero\tNom\tDate\n");
	while (fread(&cpt, sizeof(Compte), 1, f) == 1) {
	printf("%d\t%s\t%d/%d/%d\n", cpt.numero,cpt.nom,
	Date.jour, Date.mois, Date.annnee);
	}
	return 0;
}
