#include <iostream>

using namespace std;

int main(){
  /* En mi empresa tengo lo siguiente:
      5 productos diferentes
      12 meses
      4 años
  */
  int empresa[5][12][4];
  //Llenamos el vector incrementando de uno en uno
  int suma = 0, valor = 1;
  for(int i=0; i<5; i++){
    for(int j=0; j<12; j++){
      for(int k=0; k<4; k++){
        empresa[i][j][k] = valor;
        valor++;
        suma += empresa[i][j][k];
      }
    }
  }

  cout << "Las ganancias en los cuatro años fueron de: " << suma;


  return 0;
}
