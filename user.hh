/**
 *@file user.hh
*/

#ifndef _USER_HH_
#define _USER_HH_

#include "process.hh"

#ifndef NO_DIAGRAM
#include <string>
#include <iostream>
#endif
using namespace std;

/**
 *@class user
 *@brief Representa el usuario que ejecutara procesos
 *
*/
class user
{
    
public:
    //Constructoras
    /**
     *@brief Construye un usiario con ID=id
     *\pre: Cierto
     *\post: Retorna un usuario etiquetado
    */    
    poner_usuario(string id);

    //Destructoras
    /**
     *@brief Elimina al usuario con ID=id
     *\pre: Cierto
     *\post: El usiario con ID=id deja de existir en el programa
    */ 
    quitar_usuario(string id);

    //Modificadoras
    /**
     *@brief Inizializacion del cluster
     *\pre: Cluster inicializado
     *\post: cluster con el numero de procesadores, sus conexiones y 
     * la memoria de cada uno de ellos en orden creciente de id
    */
    enviar_proceso_a_usuario(const process& p);
    //Consultoras
    /**
     *@brief Lee el numero de procesos pendientes del user
     *\pre: ID=id
     *\post: retorna el numero de procesos pendientes y el mas antiguo
     */ 
    consultar_usuario(string id);

    void setid(string id);
    
private:
    string id;
    list<process> pendientes;
};

#endif
