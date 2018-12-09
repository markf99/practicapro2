#include "user.hh"
#include "process.hh"
#include <list>
#include <iostream>
using namespace std;

user::user(){
    id;
    pendientes;
}


void setid(string id){
    this->id=id;
}

void getnProcess(){
    return pendientes.size();
}


void user::afegir_process(const process& p){
    list<pendientes>::iterator it=pendientes.end();
    pendientes.insert(it, p);
}


void user::consultar_usuario(){
    pair<int, string> npendent;
    list<process>::iterator it=pendientes.begin();
    npendent.first = pendientes.size();
    if(pendientes.size()==0) npendent.second = NULL;
    else npendent.second = *it.getid();
    return npendent;
}

/*void user::poner_usuario(const string& id){
    pair<string, list<process> > x;
    map<string, list<process> >::iterator it=users.find(id);
    if(it==users.end()){
        list<process> pendientes;
        x.first=id;
        x.second=pendientes;
        u.insert(x);  
    }

}


    void user::consultar_usuario(string id){
    map<string, list<process> >::iterator it=users.find(id);
    if(it->second.empty()) cout<<'0';
    else{
        cout<<it->second.size()<<' '<<it=it->second.begin();
    }
    cout<<endl;
}*/