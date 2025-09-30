#include <vector>
#include <random>
int BusquedaBinaria(int x, std::vector<int>& v, int ini, int fin){
	int medio = (ini + fin) / 2;
	if (ini > fin){
		return -1;
	}
	else if (v[medio] == x){
		return medio;
	}
	else {
		if (v[medio] > x){
			return BusquedaBinaria(x,v,ini,medio-1);
		}
		else{
			return BusquedaBinaria(x,v,ini+1,fin);
		}
	}
}

int BusquedaBinaria_INV(int x, std::vector<int>& v, int ini, int fin){

	int medio =ini +( (fin -ini) / 2);
	if (ini > fin){
		return -1;
	}
	else if (v[medio] == x){
		return medio;
	}
	else {
		if (v[medio] < x){
			return BusquedaBinaria_INV(x,v,ini,medio-1);
		}
		else{
			return BusquedaBinaria_INV(x,v,ini+1,fin);
		}
	}
}


int Partition(std::vector<int>& v, int ini, int fin){
	int x = v[fin];
	int i = ini;
	for(int j = i; j<fin;j++){
		if (v[j] <= x) {
			std::swap(v[i],v[j]);
			i++;
		}
	}
	std::swap(v[i],v[fin]);
	return i;
	
}

void QuickSort(std::vector<int>& v, int ini, int fin){
	if (ini < fin){
		int pivot = Partition(v,ini,fin);
		QuickSort(v,ini,pivot-1);
		QuickSort(v,pivot+1,fin);
	}
}

void QuickSort_Primero(std::vector<int>& v, int ini, int fin){
	if (ini < fin){
		std::swap(v[ini],v[fin]);
		int pivot = Partition(v,ini,fin);
		QuickSort_Primero(v,ini,pivot-1);
		QuickSort_Primero(v,pivot+1,fin);
	}
}


void QuickSort_Centro(std::vector<int>& v, int ini, int fin){
	if (ini < fin){
		int centro = ini + (fin - ini)/2;
		std::swap(v[centro],v[fin]);
		int pivot = Partition(v,ini,fin);
		QuickSort_Centro(v,ini,pivot-1);
		QuickSort_Centro(v,pivot+1,fin);
	}
}


void QuickSort_Random(std::vector<int>& v, int ini, int fin){
	if (ini < fin){
		int random = ini + rand() % (fin - ini + 1);
		std::swap(v[random],v[fin]);
		int pivot = Partition(v,ini,fin);
		QuickSort_Random(v,ini,pivot-1);
		QuickSort_Random(v,pivot+1,fin);
	}
}


