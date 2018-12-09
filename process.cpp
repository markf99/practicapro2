#include "process"
#include <string>
using namespace std;

process::process(int id, string userid, int mem, int time){
	this->id=id;
	this->userid=userid;
	this->mem=mem;
	this->time=time;
}


int getid(){
	return id;
}

string getuserid(){
	return id;
}
