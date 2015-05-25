/*----------------------------------------------
| Demo 1 : Clignotement d'une led 
| - flux d'execution d'un code 
| - boucle d'attente
| - configuration de patte en sortie
| 
|
 ---------------------------------------------*/
// les macros
#define LedRouge P1_0
#define AllumeLedRouge digitalWrite(LedRouge, HIGH)
#define EteindreLedRouge digitalWrite(LedRouge, LOW)
/*======================================
  fonction setup : regroupe les initialisation
  sera executée une seule fois
 ======================================= */

void setup()
{
  // Configuration de la pate en sortie 
  pinMode(LedRouge, OUTPUT);  // LED1
  
}

/*======================================
  fonction loop : boucle principale
  le code de cette fonction sera exécuté 
  en permanence 
 ======================================= */
void loop()
{
	AllumeLedRouge;
	delay (300);
	EteindreLedRouge;
	delay (300);
  
}
