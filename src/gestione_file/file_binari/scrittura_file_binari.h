#ifndef SCRITTURA_FILE_BINARI_H
#define SCRITTURA_FILE_BINARI_H

#include "../../utility/utility.h"
#include "../../personaggio/personaggio.h"
#include "../../inventario/gestione_inventario.h"
#include "../../gestione_avventura/gestione_mappa.h"
#include "../../gestione_avventura/gestione_movimenti.h"

bool accodare_file_salvataggio(stringa nome_file, personaggio giocatore, inventario inv, matrice mappa, posizione pos);

#endif
