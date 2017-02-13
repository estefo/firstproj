#pragma once
#include <stdio.h>

int fScan() {

	int dpi = 0, farbtiefe = 0;
	float breite = 0, hoehe = 0;
	double groesse = 0;
	printf("Bitte geben sie die DPI ein: ");
	scanf("%i", &dpi);

	printf("Bitte geben sie die Farbtiefe ein: ");
	scanf("%i", &farbtiefe);

	printf("Bitte geben sie die Breite in cm ein: ");
	scanf("%i", &breite);

	printf("Bitte geben sie die Hoehe in cm ein: ");
	scanf("%i", &hoehe);

	groesse =((((breite * dpi) / 2.54) * (hoehe * dpi) / 2.54) * farbtiefe)/8/1024/1024;

	printf("Die zu erwartende Dateigr\x94\xE1\e entspricht %.4lf MIB\n");


	return 0;
}



int fKinder(void)

{
	int kinder = 0, eier = 0, rest = 0, erhalten = 0;

	printf("Willkommen zum Kindergeburtstag\n");
	printf("Wie viele Kinder sind da?\n");
	scanf("%i", &kinder);
	printf("Wie viele \x9a\x62\erraschungseier hast du, ich hoffe mehr als kinder\n");
	scanf("%i", &eier);
	erhalten = eier / kinder;
	rest = eier%kinder;
	printf("Es wurde %i kinder eingeladen und jedes hat %i \x9a\x62\erraschungseier bekommen\n"
		"ES bleiben noch %i \x81\x62rig\n", kinder, erhalten, rest);

	return 0;


}