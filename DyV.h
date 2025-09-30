#include <vector>

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
			return BusquedaBinaria(x,v,ini,medio-1);
		}
		else{
			return BusquedaBinaria(x,v,ini+1,fin);
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


