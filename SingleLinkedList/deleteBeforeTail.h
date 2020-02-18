/*****************************************************
	
	Josue Martinez Martinez
	S00960233

Bono:

Borra el nodo anterior a tail si la lista tiene 3 o mas elementos, si la lista tiene
solo un elemento hace deleteFromTail(), si la lista tiene 2 elementos hace
deleteFromHead(). De no tener elementos te informara que esta empty.

Para realizar el deleteBeforeTail():
	Se crean tres pointers;
		tmp3: apuntando a head
		tmp2: apuntando al proximo de head
		tmp: apuntando al proximo de tmp2

Mientras tmp no sea igual que tail se van a mover y van a ir desalojando memoria
haciendole delete al que esta antes de tail hasta que solo quede tail y lo elimine.
*******************************************************/
template <class T>
void IntSLList<T> :: deleteBeforeTail() {

	if (head == 0)
	{
		cout<< " No existen Nodos " << endl;	
	}

	else if (head == tail)
	{
		deleteFromTail();
	}
	else if (head -> getNext() == tail)
	{
		deleteFromHead();
	}

	else{
		IntSLLNode<T> *tmp, *tmp2, *tmp3;
		tmp3 = head;
		tmp2 = head -> getNext();
		tmp = tmp2 -> getNext();
		
		while (tmp != tail){
			tmp3 = tmp2;
			tmp2 = tmp2 -> getNext();
			tmp = tmp ->getNext();
		}
		tmp3 -> setNext(tmp);
		delete tmp2;		
	}	
}
