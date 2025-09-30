#include <vector>
#include "DyV.h"
#include <iostream>
using namespace std;

int main(){
	vector<int> a{1,2,3,4,5,6,7,8,9,10};
	vector<float> a1{1,2,3,4,5,6,7,8,9,10};
	vector<int> b{10,9,1,2,8,7,3,4,5,6};
	vector<char> a2{1,2,3,4,5,6,7,8,9,10};
	vector<int> c{1,3,5,7,9,2,4,6,8,10};
	vector<int> c1{10,9,8,7,6,5,4,3,2,1};


	cout << "Ingrese el número que desea buscar: ";
	int x;
	cin >> x;
	int res = BusquedaBinaria(x,a,0,a.size());
	if (res != -1){
		cout << "Se encuentra en la posición: " << res << " del vector en Busqueda Binaria Normal"	<< endl;
	} else {
		cout << "Número no encontrado" << endl;
	}
		
	int res2 = BusquedaBinaria_INV(x,c1,0,c1.size());
	if (res2 != -1){
		cout << "Se encuentra en la posición: " << res2 << " del vector en Busqueda Binaria Inversa"	<< endl;
	} else {
		cout << "Número no encontrado" << endl;
	}
	return 0;	
}



