#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

stringa leggere_file_testo(stringa nome_file, stringa stringa_file)
{

	int i;

	FILE * fp;

	if((fp = fopen("prova.txt", "r")) != NULL)
	{
		i = 0;

		while(!feof(fp))
		{
      scrivere_carattere(&stringa_file, i, fgetc(fp));

			i++;
		}
    
    scrivere_carattere(&stringa_file, i-1, '\0');
	}
	else
	{
		printf("Errore nell'apertura del file.");
	}

	fclose(fp);

	return stringa_file;
}

