#include <iostream>

using namespace std;

//Declaramos el struct y las variables que va a almacenar
struct Usuario{
  int codigo;
  char nombres[30];
}varReg;

  Usuario v[10];
  int cantidad = 0;

void Registrar(){
  char opcion;
  do{
    v[cantidad] = varReg;
    cout << "Ingrese codigo: "; cin >> v[cantidad].codigo;
    cout << "Ingrese nombre: "; cin >> v[cantidad].nombres;
    cout << "Desea realizar otro registro? s/n: "; cin >> opcion;
    cantidad++;
  }while(opcion == 's');
}

main(){
  Registrar();
}
