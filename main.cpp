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
	map<string, user> usuarios;
	string instruction;
	while(cin>>instruction and instruction!="acabar"){
		if(instruction=="configurar_cluster"){
			int n;
			cin>>n;
			int nodes_size = 2*n + 1;
			vector<int> nodes(nodes_size);
			vector<int> memories(n);
			for (int i = 0; i < nodes_size; i++){
				cin >> nodes[i];
			}
			for (int i = 0; i < n; i++){
				cin >> memories[i];
			}
			c.configurar_cluster(nodes, memories);
		}
		else if(instruction=="poner_usuario"){
			user new_user;
			string id;
			cin>>id;
			new_user.setid(id);
			usuarios.insert(pair<string, user>(id, new_user));
		}
		else if(instruction=="quitar_usuario"){
			string id;
			cin>>id;
			user remove = usuarios.find(id)->second;
			if(remove.getnProcess()==0){
				usuarios.erase(id);
			}
		}
		else if(instruction=="consultar_usuario"){
			string id;
			cin>>id;
			user consultat=usuarios.find(id)->second;
			pair<int, string> user_info=consultat.consultar_usuario();
			if(user_info.first==0) cout<<'0'<<endl;
			else cout<<user_info.first<<' '<<user_info.second<<endl;
		}
		else if(instruction=="enviar_proceso_a_usuario"){
			string iduser;
			cin>>iduser;
			int id, mem, time;
			cin>>id>>mem>>time; 
			process afegirp(id, iduser, mem, time);
			user consultat=usuarios.find(iduser)->second;
			consultat.afegir_process(afegirp);		
		}
		else if(instruction=="consultar_procesador"){
			int node;
			cin>>node;
			cout<<"Processador "<<node<<endl;
		}
		else if(instruction=="poner_proceso_en_procesador"){
			int node;
			cin>>node;
			string iduser;
			cin>>iduser;
			int id, mem, time;
			cin>>id>>mem>>time;
			process
			processor consultar;
			consultar.getProcessorMem(node);
			
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
