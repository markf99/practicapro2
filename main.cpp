/**
  *@mainpage Documentación principal
  * Programa principal de la practica <em>Gestión de tareas de una arquitectura mutiprocesador y multiusuario
  * tipo NUMA</em>.
  */
/**
  *@file main.cpp
  */

#include "cluster.hh"
#ifndef NO_DIAGRAM
#include <string>
#include <iostream>
//#include "BinTree.hh"
#endif
using namespace std;

/** @brief Programa principal de la practica <em>Gestión de tareas de una arquitectura mutiprocesador y multiusuario
tipo NUMA</em>.
*/
int main (){
	cluster c;
	user u;
	string instruction;
	while(cin>>instruction and instruction!="acabar"){
		if(instruction=="configurar_cluster"){
			int n;
			cin>>n;
			c.configurar_cluster(n);
		}
		else if(instruction=="poner_usuario"){
			string id;
			cin>>id;
			u.poner_usuario(id);
		}
		else if(instruction=="quitar_usuario"){
			string id;
			cin>>id;
			u.quitar_usuario(id);
		}
		else if(instruction=="consultar_usuario"){
			string name;
			cin>>name;
			u.consultar_usuario(name);
		}
		else if(instruction=="enviar_proceso_a_usuario"){
			int id,
		}
		else if(instruction=="consultar_procesador"){
			int id;
			cin>>id;
			c.consultar_procesador(id);
		}
		else if(instruction=="poner_proceso_en_procesador"){
			int p_id,mem,p_time;
			cin>>p_id>>mem>>p_time;
			if(u.consultar_usuario(id)) u.poner_proceso_en_procesador(id,);

		}
		else if(instruction=="enviar_proceso_a_cluster"){
			int x;
			cin>>x;
			c.enviar_proceso_a_cluster(x,u);
		}
		else if(instruction=="avanzar_tiempo"){
			double time;
			cin>>time;
			c.avanzar_tiempo(time);
		}
	}
	cout<<"acabar"<<endl;

}
