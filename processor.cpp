#include "processor.hh"
#include "process.hh"
using namespace std;

processor::processor(int id, int mem){
	identificador = id;
	p_left = p_right = NULL;
	tamano = mem;
	occupied_mem = vector(mem, false); //mirar si funciona o si fer un bucle...		
}

void processor::add_left_proc(processor left){
	p_left = left;
}

void processor::add_right_proc(processor right){
	p_right = right;
}

int getProcessorMem(identificador){
	return occupied_mem;
}

void processor::consultar_procesador(int id){
	processor consultat=
}