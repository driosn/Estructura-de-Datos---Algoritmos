#include <iostream>

using namespace std;

/* Modificacion: Esta operación consiste en reemplazar un componente del
arreglo con otro valor. Para ello, primero se buscará el elemento en el
arreglo. Si se encuentra, antes de realizar el cambio se debe verificar que
el orden del arreglo no se altere. Si esto llegara a suceder, entonces es
necesario realizar dos operaciones; primero se debe eliminar el elemento que
se quiere modificar y luego insertar en la posición correspondiente el
nuevo valor. */

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
  int N;
  cout << "Ingrese la cantidad de elementos que tendra su arreglo: ";
  cin >> N;
  int V[N];
  cout << "Ingrese los elementos de su arreglo" << endl;
  for(int i=0; i<N; i++){
    cin >> V[i];
  }
  cout << "El arreglo ingresado es el siguiente: " << endl;
  mostrarArreglo(V , N);
  if(N > 0){
    //Verificamos que el arreglo no este vacio
    cout << "Ingrese el elemento a modificar: ";
    int X; cin >> X;
    cout << "Ingrese el nuevo valor de dicho elemento: ";
    int Y; cin >> Y;
    int POS = buscaSecuencialOrdenado(V, N, X);
    if(POS > 0){
      //Validamos que el siguiente valor sea mayor o igual
      if(V[POS+1] >= Y) V[POS] = Y;
      else{
        //Si no, eliminamos el valor e insertamos donde corresponda
        N--;
        for(int i=POS; i<N; i++){
          V[i] = V[i+1];
        }
        while((V[POS] < Y) && (POS < N-1)){
          POS++;
        }
        //Insertamos el nuevo elemento
        for(int i=N; i>=POS; i--){
          //Desplazamos hacia la derecha los valores del arreglo
          V[i+1] = V[i];
        }
        V[POS] = Y;
        N++;
      }
      cout << "El nuevo arreglo es el siguiente: " << endl;
      mostrarArreglo(V, N);
    }else{
      cout << "El elemento no se encuentra en el arreglo" << endl;
    }
  }

  return 0;
}
