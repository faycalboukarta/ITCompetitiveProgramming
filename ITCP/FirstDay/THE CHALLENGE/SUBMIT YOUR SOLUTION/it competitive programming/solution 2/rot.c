#include <stdio.h>
#include <stdlib.h>

// flush
void flush()
{
	while( getchar() != '\n' )
		continue;
}

// programme principal
int main()
{
	int decalage = 0;
	char nom_fichier[256];
	char choix = 'c';
	// choix
	printf( "Code de Cesar\n" );
	printf( "\nSaisir le décalage : " );
	scanf( "%d", &decalage );
	flush();
	printf( "\nSaisir le nom du fichier : " );
	scanf( "%s", nom_fichier );
	flush();
	printf( "\nChiffrement [c] ou déchiffrement [d] : " );
	scanf( "%c", &choix );
	// synthèse
	switch( choix )
	{
	case 'c' :
		printf("\nVous avez demandé le chiffrement du fichier %s avec un décalage de %d.\n", nom_fichier, decalage );
		{
			int index;
			int taille_fichier = 0;
			FILE * fichier_avant = NULL;
			FILE * fichier_apres = NULL;
			int taille_memoire_tamon = 1024;
			char * memoire_tampon = NULL;
			// allocation
			memoire_tampon = (char*)malloc(taille_memoire_tamon);
			// mise en mémoire tampon
			fichier_avant = fopen( nom_fichier, "r" );
			taille_fichier = fread( memoire_tampon, 1, taille_memoire_tamon, fichier_avant );
			fclose( fichier_avant );
			// chiffrement dans le mémoire tampon
			for( index = 0; index != taille_fichier; ++index )
			{
				// chiffrement des majuscules
				if( memoire_tampon[ index ] >=65 && memoire_tampon[ index ] < 91 )
					memoire_tampon[ index ] = ( ( memoire_tampon[ index ] - 65 ) + decalage ) % 26 + 65;
				// chiffrement des minuscules
				if( memoire_tampon[ index ] >=97 && memoire_tampon[ index ] < 123 )
					memoire_tampon[ index ] = ( ( memoire_tampon[ index ] - 97 ) + decalage ) % 26 + 97;
			}
			// mise a jour du fichier
			fichier_apres = fopen( nom_fichier, "w" );
			fwrite( memoire_tampon, 1, taille_fichier, fichier_apres );
			fclose( fichier_apres );
			// desallocation
			free( memoire_tampon);
		}
		return 0;
	case 'd' :
		printf("\nVous avez demandé le déchiffrement du fichier %s avec un décalage de %d.\n", nom_fichier, decalage );
		{
			int index;
			int taille_fichier = 0;
			FILE * fichier_avant = NULL;
			FILE * fichier_apres = NULL;
			int taille_memoire_tamon = 1024;
			char * memoire_tampon = NULL;
			// allocation
			memoire_tampon = (char*)malloc(taille_memoire_tamon);
			// mise en mémoire tampon
			fichier_avant = fopen( nom_fichier, "r" );
			taille_fichier = fread( memoire_tampon, 1, taille_memoire_tamon, fichier_avant );
			fclose( fichier_avant );
			// déchiffrement dans le mémoire tampon
			for( index = 0; index != taille_fichier; ++index )
			{
				// déchiffrement des majuscules
				if( memoire_tampon[ index ] >=65 && memoire_tampon[ index ] < 91 )
					memoire_tampon[ index ] = ( ( memoire_tampon[ index ] - 65 ) - decalage ) % 26 + 65;
				// déchiffrement des minuscules
				if( memoire_tampon[ index ] >=97 && memoire_tampon[ index ] < 123 )
					memoire_tampon[ index ] = ( ( memoire_tampon[ index ] - 97 ) - decalage ) % 26 + 97;
			}
			// mise a jour du fichier
			fichier_apres = fopen( nom_fichier, "w" );
			fwrite( memoire_tampon, 1, taille_fichier, fichier_apres );
			fclose( fichier_apres );
			// desallocation
			free( memoire_tampon);
		}
		return 0;
	default:
		return -1;
	}
}