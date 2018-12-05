#include "user.hh"
#include <list>
#include <map>
using namespace std;

user::usuarios(){
    map<string, list<process> > users;
}

void user::poner_usuario(const string& id){
    pair<string, list<process> > x;
    map<string, list<process> >::iterator it=users.find(id);
    if(it==users.end()){
        list<process> pendientes;
        x.first=id;
        x.second=pendientes;
        u.insert(x);  
    }

}

void user::quitar_usuario(const string& id){
    if(not users.empty())
}


void user::enviar_proceso_a_usuario(const string& id, const process& p){
    map<string, list<process> >::iterator it=users.find(id);
	it->second.push(p)
}


void user::consultar_usuario(string id){
    map<string, list<process> >::iterator it=users.find(id);
    if(it->second.empty()) cout<<'0';
    else{
        cout<<it->second.size()<<' '<<it=it->second.begin();
    }
    cout<<endl;
}
