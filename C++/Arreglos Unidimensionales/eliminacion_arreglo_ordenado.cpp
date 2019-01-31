#include <iostream>

using namespace std;

/* El algoritmo elimina un elemento X de un arreglo unidimensional V de N
elementos que se encuentra ordenado en forma creciente*/

// POS e I son variables de tipo entero

int buscaSecuencialOrdenado(int V[], int N, int X){
  int POS;
  int i = 1;
  //X es el elemento a encontrar
  while(i<=N && V[i]<X){
    i++;
  }
  if((i>N) || (V[i]>X)){
    POS = -i;
  }else{
    POS = i;
  }
  return POS;
}

void mostrarArreglo(int v[], int n){
  for(int i=0; i<n; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
  int N = 0;
  cout << "Ingrese la cantidad de elementos de su arreglo: ";
  cin >> N;
  int V[N];
  cout << "Ingrese los elementos de su arreglo: " << endl;
  for(int i=0; i<N; i++){
    cin >> V[i];
  }
  mostrarArreglo(V, N);
  if(N > 0){
      //Si el arreglo no está vacio llamamos a buscaSecuencialOrdenado
      cout << "Ingrese el elemento a eliminar: ";
      int X;
      cin >> X;
      int POS = buscaSecuencialOrdenado(V, N, X);
      if(POS < 0){
        cout << "El elemento no existe" << endl;
      }else{
        //Disminuimos en uno la cantidad de elementos
        N = N-1;
        for(int i=POS; i<N; i++){
          //Desplazamos los valores de la derecha del elemento a eliminar
          V[i] = V[i+1];
        }
      }
      cout << "El nuevo arreglo es el siguiente" << endl;
      mostrarArreglo(V, N);
  }else{
    cout << "El arreglo esta vacio";
  }
  return 0;
}
