#ifndef ListaSimple
#define ListaSimple

#include <iostream>
#include "NodoSimple.hpp"
using namespace std;

template <class T>
class ListaSimple{
	NodoSimple<T> * back;
	NodoSimple<T> * front;
	int size;
public:
	ListaSimple(){
		back = front = NULL;
		size = 0;
	}
	NodoSimple<T> *getBack(){
		return back;
	}
	NodoSimple<T> *getFront(){
		return front;
	}
	int getSize(){
		return size;
	}
	void setBack(NodoSimple <T> *b){
		back = b;
	}
	void setBack(NodoSimple <T> *f){
		front = f;
	}
	bool empty(){
		return size == 0;
	}
	void addBack(T dato){
		NodoSimple<T> *q = new NodoSimple(dato);
		if (empty()){
			back = from = q;
			size = 1;
		}
		else {
			q->setSig(back);
			back = q;
			size++;
		}
	}
	void deleteBack(){
		if(empty()){
			cout<<"No Hay Que Borrar La Lista Esta Vacia"<<endl;
		}
		else {
			if(getSize()==1){
				delete back;
				back = front = NULL
					size = 0;
			}
			else if (getsize() > 1){
				NodoSimple <T> *q = back;
				back = q->getSig();
				q->setSig(NULL);
				delete q;
				size-;
			}
		}
	}
	friend ostream& operator<<ostream& sale, ListaSimple<T> &list){
		NodoSimple<T> *q = lis.back;
		if(q ==
		sale <<"[";
		while(q->getSig()!= NULL){
			sale <<q->getInfo()<<",";
			q = q->getSig();
		}
		cout << q->getInfo()<<"]"<<endl;
	}
};

#endif //ListaSimple
