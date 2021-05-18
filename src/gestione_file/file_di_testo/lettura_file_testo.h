#ifndef LETTURA_FILE_TESTO_H
#define LETTURA_FILE_TESTO_H

/**
 * Il seguente modulo, presenta al suo interno la funzione leggere_file_testo che serve per poter leggere i vari caratteri presenti in un
 * file di testo e memorizzarli.
 * Perci� la funzione ha come parametri il nome del file di testo su cui si andr� ad operare, e stringa_file che � la stringa in cui
 * si dovranno aggiornare i suoi elementi.
 */

#include "../../utility/utility.h"

stringa leggere_file_testo(stringa nome_file, stringa stringa_file);
void leggere_mappa_file(stringa nome_file);
stringa leggere_file_storia(stringa nome_file, stringa stringa_file);

#endif


