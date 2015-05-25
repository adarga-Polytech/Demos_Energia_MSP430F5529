/*----------------------------------------------
| Demo 1 : Clignotement d'une led 
| - flux d'execution d'un code 
| - boucle d'attente
| - configuration de patte en sortie
| 
|
 ---------------------------------------------*/

/*======================================
  fonction setup : regroupe les initialisation
  sera executée une seule fois
 ======================================= */

void setup()
{
  // Configuration de la pate en sortie 
  pinMode(P1_0, OUTPUT);  // LED1
  
}

/*======================================
  fonction loop : boucle principale
  le code de cette fonction sera exécuté 
  en permanence 
 ======================================= */
void loop()
{
  digitalWrite(P1_0, HIGH);
  delay (300);
  digitalWrite(P1_0, LOW);
  delay (300);
  
}
