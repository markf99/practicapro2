/**
 *@file cluster.hh
*/

#ifndef _CLUSTER_HH_
#define _CLUSTER_HH_

#include "processor.hh"
#include "process.hh"
#include "user.hh"

#ifndef NO_DIAGRAM
#include "BinTree.hh"
#include <iostream>
#endif
using namespace std;

/** 
*@class cluster
 *@brief Conjunto que contiene y administra los difentes procesadores
 *
*/
class cluster
{
    
public:
    //Constructoras
    /**
     *@brief Construye un cluster
     *Se ejecuta automáticamente al declarar un cluster
     *\pre: Cierto
     *\post: Retorna un cluster vacio
    */    
    cluster();

    //Modificadoras
    /**
     *@brief Inizializacion del cluster
     *\pre: Cluster inicializado
     *\post: cluster con el numero de procesadores, sus conexiones y 
     * la memoria de cada uno de ellos en orden creciente de id
    */
void configurar_cluster(int k, BinTree<int>& a);
    /**
     *@brief Cluster recibe procesos non ejecutados
     *\pre: Cierto
     *\post: Se mandan x procesos al cluster
    */
void enviar_procesos_a_cluster(int n);
    /**
     *@brief Tiempo de ejecucion modificado
     *\pre: tiempo>=0
     *\post: Quedan eliminados los procesos que hayan acabado
     *en ese instante de tiempo
    */
void avanzar_tiempo(int time);
    
private:
    
};

#endif
