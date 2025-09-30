#include <vector>
#include "DyV.h"
#include <iostream>
#include <chrono>
using namespace std;

int main(){
	srand(time(NULL));
	vector<int> ORD{1,2,3,4,5,6,7,8,9,10};
	vector<float> a1{1,2,3,4,5,6,7,8,9,10};
	vector<int> b{10,9,1,2,8,7,3,4,5,6};
	vector<char> a2{1,2,3,4,5,6,7,8,9,10};
	vector<int> c{1,3,5,7,9,2,4,6,8,10};
	vector<int> ORD2{10,9,8,7,6,5,4,3,2,1};


        cout << "Ingrese el número que desea buscar: ";
	int x;
	cin >> x;
	int res = BusquedaBinaria(x,ORD,0,ORD.size());
	if (res != -1){
		cout << "Se encuentra en la posición: " << res << " del vector en Busqueda Binaria Normal"	<< endl;
	} else {
		cout << "Número no encontrado" << endl;
	}
		
	int res2 = BusquedaBinaria_INV(x,ORD2,0,ORD2.size());
	if (res2 != -1){
		cout << "Se encuentra en la posición: " << res2 << " del vector en Busqueda Binaria Inversa"	<< endl;
	} else {
		cout << "Número no encontrado" << endl;
	}
	vector<int> c_prueba1 = c;
	vector<int> c_prueba2  = c;
	vector<int> c_prueba3 = c;
	vector<int> c_prueba4 = c;
	vector<int> c_prueba5 = c;
	auto start_1 = chrono::system_clock::now();
        QuickSort(c_prueba1,0,c_prueba1.size()-1);
	auto end_1 = chrono::system_clock::now();
	chrono::duration<float, std::milli> duration_1 = end_1 -start_1;

	cout << "Elementos ordenados normal en un tiempo de: " << duration_1.count() << " s" << endl;
	cout << "Elementos: ";
	for (int valor : c_prueba1){
		cout << valor << " ";
		}
	cout << endl;

	auto start_2 = chrono::system_clock::now();
        QuickSort_Primero(c_prueba2,0,c_prueba2.size()-1);
	auto end_2 = chrono::system_clock::now();
	chrono::duration<float, std::milli> duration_2 = end_2 -start_2;

	cout << "Elementos ordenados con primero un tiempo de: " << duration_2.count() << " s" << endl;
	cout << "Elementos: ";
	for (int valor : c_prueba2){
		cout << valor << " ";
		}
	cout << endl;

	auto start_3 = chrono::system_clock::now();
        QuickSort_Centro(c_prueba3,0,c_prueba3.size()-1);
	auto end_3 = chrono::system_clock::now();
	chrono::duration<float, std::milli> duration_3 = end_3 -start_3;

	cout << "Elementos ordenados con centro un tiempo de: " << duration_3.count() << " s" << endl;
	cout << "Elementos: ";
	for (int valor : c_prueba3){
		cout << valor << " ";
		}
	cout << endl;


	auto start_4 = chrono::system_clock::now();
        QuickSort_Random(c_prueba4,0,c_prueba4.size()-1);
	auto end_4 = chrono::system_clock::now();
	chrono::duration<float, std::milli> duration_4 = end_4 -start_4;

	cout << "Elementos ordenados con random un tiempo de: " << duration_4.count() << " s" << endl;
	cout << "Elementos: ";
	for (int valor : c_prueba4){
		cout << valor << " ";
		}
	cout << endl;


	return 0;	
	
}



