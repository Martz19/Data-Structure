
//josue martinez martinez
//S00960233
#include <iostream>
using namespace std;

//definir IntArrayPtr como un pointer a un integer
typedef int* IntArrayPtr;

int main (){

//definiendo dos variables integers
int d1, d2;

//pedirle al usuario dos valores para determinar la dimension del arreglo
cout << "Enter the row and column dimensions of the array:\n";
cin >> d1 >> d2;

//definiendo arreglo de pointers
IntArrayPtr *m = new IntArrayPtr[d1];
int i, j;

//crea un arreglo de size d2 y lo guarda en m[i]
for (i=0; i < d1; i++)
	m[i] = new int [d2];
//m is now a d1 by d2 array

//le pide al usuario que entre dos valores integers
cout <<"Enter " << d1 << "rows of " << d2 << " integers each:\n";

//lee el valor por columna y fila y lo guarda en el arreglo
for(i=0; i < d1; i++)


	for(j =0; j < d2; j++)
		cin >> m[i][j];

cout << "Echoing the 2 dimensional array:\n";

//imprime el arreglo encontrado
for (i=0; i < d1; i++)
{
	for(j=0; j<d2; j++)
		cout << m[i][j] << " ";
	cout << endl;
}

//liberar memoria
for (i = 0; i < d1; i++)
	delete[] m[i];
delete[] m;

return 0;

}

