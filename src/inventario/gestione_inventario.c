#include <stdio.h>
#include <stdlib.h>
#include "gestione_inventario.h"
#include "../gestione_file/file_di_testo/lettura_file_testo.h"


stringa concatenare_frammenti_file(stringa * frammenti, int indice, stringa risposta);


bool leggere_frammento_est(inventario inv)
{
	return inv.frammento_mappa_est;
}

bool leggere_frammento_ovest(inventario inv)
{
	return inv.frammento_mappa_ovest;
}

bool leggere_frammento_nord(inventario inv)
{
	return inv.frammento_mappa_nord;
}

bool leggere_frammento_sud(inventario inv)
{
	return inv.frammento_mappa_sud;
}

bool leggere_chiave_semplice(inventario inv)
{
	return inv.chiave_semplice;
}

bool leggere_chiave_re(inventario inv)
{
	return inv.chiave_re;
}

void scrivere_frammento_est(inventario *inv, bool valore)
{
	inv->frammento_mappa_est = valore;
}

void scrivere_frammento_ovest(inventario *inv, bool valore)
{
	inv->frammento_mappa_ovest = valore;
}

void scrivere_frammento_nord(inventario *inv, bool valore)
{
	inv->frammento_mappa_nord = valore;
}

void scrivere_frammento_sud(inventario *inv, bool valore)
{
	inv->frammento_mappa_sud = valore;
}

void scrivere_chiave_semplice(inventario *inv, bool valore)
{
	inv->chiave_semplice = valore;
}

void scrivere_chiave_re(inventario *inv, bool valore)
{
	inv->chiave_re = valore;
}


void inizializza_inventario(inventario *inv)
{
	scrivere_frammento_nord(inv, false);
	scrivere_frammento_sud(inv, false);
	scrivere_frammento_est(inv, false);
	scrivere_frammento_ovest(inv, true);
	scrivere_chiave_re(inv, false);
	scrivere_chiave_semplice(inv, false);
}


stringa visualizzare_inventario(stringa risposta)
{
	if(leggere_frammento_nord(inv) == true)
	{
		risposta = concatenare_stringhe(risposta, "\nPossiedi il frammento di mappa nord!\n");
	}

	if(leggere_frammento_est(inv) == true)
	{
		risposta = concatenare_stringhe(risposta, "\nPossiedi il frammento di mappa est!\n");
	}

	if(leggere_frammento_sud(inv) == true)
	{
		risposta = concatenare_stringhe(risposta, "\nPossiedi il frammento di mappa sud!\n");
	}

	if(leggere_frammento_ovest(inv) == true)
	{
		risposta = concatenare_stringhe(risposta, "\nPossiedi il frammento di mappa ovest!\n");
	}

	if(leggere_chiave_semplice(inv) == true)
	{
		risposta = concatenare_stringhe(risposta, "\nPossiedi la chiave semplice!\n");
	}

	if(leggere_chiave_re(inv) == true)
	{
		risposta = concatenare_stringhe(risposta, "\nPossiedi la chiave del re!\n");
	}

	return risposta;
}

/*stringa visualizzare_frammenti_mappa(stringa risposta)
{
	stringa frammenti[4];

	int i;

	if(leggere_frammento_nord(inv) == true)
	{
		frammenti[0] = leggere_file_testo("mappa/pezzo_mappa1.txt", frammenti[0]);
	}
	else
	{
		frammenti[0] = leggere_file_testo("mappa/pezzo_mappa_vuoto_2.txt", frammenti[0]);
	}

	if(leggere_frammento_est(inv) == true)
	{
		frammenti[1] = leggere_file_testo("mappa/pezzo_mappa2.txt", frammenti[1]);
	}
	else
	{
		frammenti[1] = leggere_file_testo("mappa/pezzo_mappa_vuoto.txt", frammenti[1]);
	}

	if(leggere_frammento_ovest(inv) == true)
	{
		frammenti[2] = leggere_file_testo("mappa/pezzo_mappa3.txt", frammenti[2]);
	}
	else
	{
		frammenti[2] = leggere_file_testo("mappa/pezzo_mappa_vuoto_3.txt", frammenti[2]);
	}

	if(leggere_frammento_sud(inv) == true)
	{
		frammenti[3] = leggere_file_testo("mappa/pezzo_mappa4.txt", frammenti[3]);
	}
	else
	{
		frammenti[3] = leggere_file_testo("mappa/pezzo_mappa_vuoto.txt", frammenti[3]);
	}

	i = 0;


	while(i < 4)
	{
		risposta = concatenare_frammenti_file(frammenti,  i, risposta);

		i += 2;
	}

	return risposta;
}

stringa concatenare_frammenti_file(stringa * frammenti, int indice, stringa risposta)
{
	int pos;
	int pos_precedente;
	int i;
	int j;
	int temp;

	pos = 0;
	pos_precedente = 0;
	i = leggere_lunghezza(risposta);

	do
	{
		j = indice + 2;

		while(indice < j)
		{
			while(frammenti[indice][pos] != '\n')
			{
				risposta = scrivere_carattere(risposta, i, frammenti[indice][pos]);
				pos++;
				i++;
			}

			pos++;
			indice++;

			temp = pos;
			pos = pos_precedente;
			pos_precedente = temp;
		}

		risposta = scrivere_carattere(risposta, i, '\n');
		i++;
		indice -= 2;
	}while(pos_precedente < leggere_lunghezza(frammenti[indice+1]));

	return risposta;
}*/


stringa visualizzare_frammenti_mappa(stringa risposta)
{
	stringa frammenti[4];
	stringa frammento_nord = "";
	stringa frammento_est = "";
	stringa frammento_sud = "";
	stringa frammento_ovest = "";

	int i, pos_1, pos_2, j, k;

	if(leggere_frammento_nord(inv) == true)
	{
		frammento_nord = leggere_file_testo("mappa/pezzo_mappa1.txt", frammento_nord);
	}
	else
	{
		frammento_nord = leggere_file_testo("mappa/pezzo_mappa_vuoto_2.txt", frammento_nord);
	}

	if(leggere_frammento_est(inv) == true)
	{
		frammento_est = leggere_file_testo("mappa/pezzo_mappa2.txt", frammento_est);
	}
	else
	{
		frammento_est = leggere_file_testo("mappa/pezzo_mappa_vuoto.txt", frammento_est);
	}

	if(leggere_frammento_ovest(inv) == true)
	{
		frammento_ovest = leggere_file_testo("mappa/pezzo_mappa3.txt", frammento_ovest);
	}
	else
	{
		frammento_ovest = leggere_file_testo("mappa/pezzo_mappa_vuoto_3.txt", frammento_ovest);
	}

	if(leggere_frammento_sud(inv) == true)
	{
		frammento_sud = leggere_file_testo("mappa/pezzo_mappa4.txt", frammento_sud);
	}
	else
	{
		frammento_sud = leggere_file_testo("mappa/pezzo_mappa_vuoto.txt", frammento_sud);
	}

	frammenti[0] = frammento_nord;
	frammenti[1] = frammento_est;
	frammenti[2] = frammento_ovest;
	frammenti[3] = frammento_sud;

	i = 0;
	j = 0;
	k = 0;

	while(j < 2)
	{
		pos_1=0;
		pos_2=0;
		do{
			while(frammenti[k][pos_1] != '\n')
			{
				risposta = scrivere_carattere(risposta, i, frammenti[k][pos_1]);
				pos_1++;
				i++;
			}
			pos_1++;
			k++;

			while(frammenti[k][pos_2] != '\n')
			{
				risposta = scrivere_carattere(risposta, i, frammenti[k][pos_2]);
				pos_2++;
				i++;
			}
			pos_2++;
			risposta = scrivere_carattere(risposta, i, '\n');
			i++;
			k--;

		}while(pos_2 < leggere_lunghezza(frammenti[k+1]));

		k = 2;
		j++;
	}

	return risposta;
}
