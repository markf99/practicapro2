/**
 *@file process.hh
*/

#ifndef _PROCESS_HH_
#define _PROCESS_HH_

#include "processor.hh"

#ifndef NO_DIAGRAM
#include <iostream>
#endif
using namespace std;

/**
 *@class process
 *@brief Cada una de las operaciones que se realizaran en el cluster
 *
*/
class process
{
    
public:
    //Constructoras
    /**
     *@brief Crea un proceso
     *\pre: Cierto
     *\post: Retorna un proceso vacio
    */    
    proceso();
	//Destructoras
    /**
     *@brief Crea un proceso
     *\pre: Cierto
     *\post: Retorna un proceso vacio
    */    
    ~proceso();
    //Modificadoras
    /**
     *@brief Introduce procesos pendientes en el procesador
     *\pre: Proceso pendiente
     *\post: Proceso se ejecuta en el procesador
    */
    
private:
    
};

#endif
