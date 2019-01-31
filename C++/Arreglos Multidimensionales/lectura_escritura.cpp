#include <iostream>

using namespace std;

int main(){
  //Declaramos nuestro arreglo bidimensional donde:
  //arreglo[#filas][#columnas]
  int matriz[10][5];
  int secuencia = 0;
  //Llenamos el arreglo bidimensional
  for(int i=0; i<10; i++){
    for(int j=0; j<5; j++){
      matriz[i][j] = j+1 + secuencia;
    }
    secuencia += 5;
  }
  //Escribimos el arreglo bidimensional
  for(int i=0; i<10; i++){
    for(int j=0; j<5; j++){
      cout << matriz[i][j];
    }
    cout << endl;
  }



}
