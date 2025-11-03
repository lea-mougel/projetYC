#include <stdio.h>

int main() {
	int nb_secret = 32;
	int nb_user;
	scanf("%d", &nb_user);
	if (nb_user == nb_secret) {
		printf("Succès");
	} 
	else if(nb_user < nb_secret) {
		printf("Echec ! Le nombre secret est plus grand");
	}
	else {
		printf("Echec ! Le nombre secret est plus petit");
	}
	return 0;
}
