#include <iostream>

using namespace std;
/*Este algoritmo inserta un elemento Y en un arreglo unidimensional que se
encuentra ordenado de forma creciente. La capacidad máxima del arreglo es
de 100 elementos. N indica el número actual de elementos de V*/

//Funcion para realizar busqueda secuencial en un arreglo ordenado
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
  for(int i=1; i<=n; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
  int V[100];
  int N;
  cout << "Ingrese la cantidad de numeros que tendra el arreglo: ";
  cin >> N;
  cout << "Ingrese los valores del arreglo: " << endl;
  //Llenamos el arreglo con numeros ordenados
  for(int i=1; i<=N; i++){
    cin >> V[i];
  }
  cout << "El arreglo ingresado es el siguiente: " << endl;
  mostrarArreglo(V, N);
  if(N < 100){
    //Lamamos al algoritmo buscaSecuencialOrdenado
    cout << "Ingrese el elemento a insertar en el arreglo: ";
    int Y;
    cin >> Y;
    int POS = buscaSecuencialOrdenado(V, N, Y);
    if(POS > 0){
      cout << "El elemento ya existe" << endl;
    }else{
      //Aumentamos en uno la cantidad de elementos del arreglo
      N++;
      // Convertimos la posicion negativa a positiva
      POS = POS * -1;
      for(int i=N; i>=POS; i--){
        //Desplazamos hacia la derecha los valores del arreglo
        V[i+1] = V[i];
      }
      V[POS] = Y;
    }
  }else{
    cout << "No hay espacio en el arreglo";
  }
  cout << "El nuevo arreglo es el siguiente: " << endl;
  mostrarArreglo(V, N);
  return 0;
}
