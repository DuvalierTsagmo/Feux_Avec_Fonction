/*
  Titre      : feux rouge
  Auteur     : Duvalier Tsagmo
  Date       : 03/12/2021
  Description: faire un programme qui vas simuler les feux de signalisation
  Version    : 0.0.1
*/

#include "Feux.h"

int PIN_VERT = 12;
int PIN_JAUNE = 13;
int PIN_ROUGE = 14;

void setup()
{
  initialisation(PIN_VERT, PIN_JAUNE, PIN_ROUGE);
}

void loop()
{
  loopLights();
}