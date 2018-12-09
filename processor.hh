/**
 *@file processor.hh
*/

#ifndef _PROCESSOR_HH_
#define _PROCESSOR_HH_

#include "process.hh"

#ifndef NO_DIAGRAM
#include "process.hh"
#include <iostream>
#endif
using namespace std;

/**
 *@class processor
 *@brief Conjunto que contiene y administra los difentes procesadores
 *
*/
class processor
{
    
public:
    //Constructoras
    /**
     *@brief Construye un procesador
     *\pre: Cierto
     *\post: Retorna un procesador vacio
    */    
    procesador();

    /**
     *@brief Crea un procesador con memoria
     *\pre: tam>0
     *\post: Devuelve un procesador con n posiciones de memoria
    */    
    procesador(int tam);

    //Modificadoras
    /**
     *@brief Introduce procesos pendientes en el procesador
     *\pre: Proceso pendiente
     *\post: Proceso se ejecuta en el procesador
    */
    poner_proceso_en_procesador(int identificador,const process& p);

    /**
     *@brief Elimina los procesos finalizados del procesador
     *\pre: Proceso ha de estar finalizado
     *\post: Proceso se elimina del procesador
    */
    quitar_proceso_de_procesador(int identificador,const process& p);
    
    //Consultoras
    /**
     *@brief Lee el numero de procesos pendientes del user
     *\pre: ID=id
     *\post: retorna el numero de procesos pendientes y el mas antiguo
     */ 
    consultar_procesador(int id);
    
private:
    processor p_left;
    processor p_right;
    processor 
    int identificador;
    int tamano;
    vector<bool> occupied_mem;
    pair<int, int> info_process;
};

#endif
