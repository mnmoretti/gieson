#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include "gamelib.c"

int main(){

menu();

}

int menu(){

    char choice;
    bool valid = false;

    while (!valid) {

      printf("\n _______________\n|               |\n| [1]CREA MAPPA |\n| [2]GIOCA      |\n| [3]ESCI       |\n|_______________|\n\n");
      scanf("%c", &choice);

      switch (choice) {

        case '1':

          system("clear");
          valid = true;
          gest_map();

        break;

        case '2':

          system("clear");
          valid = true;
          inizializzaRand();
          inizializza_partita(numero_giocatori);
          printf("avvio gioco...\n");
          gioca();

        break;

        case '3':

          system("clear");
          printf("chiusura in corso...\n");
          valid = true;
          gamelib.termina_gioco();

        break;

        default:

          printf("Scelta non disponibile\n");
          sleep(1);
          system("clear");
          menu();

        break;
      }

}

}
