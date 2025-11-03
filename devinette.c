#include <stdio.h>

// Nombre à deviner (entre 0 et 100)
const int nombre_secret = 17;

int main() {
    int nb_utilisateur;
    
    printf("Devinez un nombre entre 0 et 100 : ");
    scanf("%d", &nb_utilisateur);
    
    if (nb_utilisateur == nombre_secret) {
        printf("Bravo! Vous avez trouvé le nombre!\n");
    } else {
        printf("Désolé, ce n'est pas le bon nombre. Essayez encore!\n");
    }
    return 0;
}
