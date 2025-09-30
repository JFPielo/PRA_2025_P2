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
