#include <stdio.h>


void Add(pNodo *primero,pNodo *ultimo, int v){
	pNodo new;
	//Crea nodo nuevo y asignar la memoria dinamica con malloc
	new=(pNodo)malloc(sizeof(noodles));
	new->valor=v;
	new->sgt=NULL;
}
int main(){
	
	//typedef struct es una palabra reservada que sirve para asignar un nombre especifico a el tipo de la estructura
	typedef struct nodo(){
		//Dato corresponde al valor que tiene el nodo
		int dato;
		//sgt corresponde al enlace asignado para el siguiente nodo en la cola
		struct nodo *sgt;
	}noodles;
	//noodles es el tipo para declarar los nodos
	typedef noodles *pNodo;
	//pNodo es el tipo para declarar punteros a un nodo
	typedef noodles *Cola;
	//Cola es el tipo para declarar colas
	
	return 0;
}
