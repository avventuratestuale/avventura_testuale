/**
 * Il seguente modulo, presenta al suo interno la funzione leggere_file_bin che serve per poter leggere i vari caratteri presenti in un
 * file binari e memorizzarli.
 * Perci� la funzione ha come parametri il nome del file binario su cui si andr� ad operare, e stringa_file che � la stringa in cui
 * si dovranno aggiornare i suoi elementi.
 */
#ifndef LETTURA_FILE_BINARI_H
#define LETTURA_FILE_BINARI_H

#include "../../utility/utility.h"

void * leggere_file_binario(stringa nome_file, int tipologia_struttura);

#endif