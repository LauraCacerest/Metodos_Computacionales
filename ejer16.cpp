#include <iostream>

using std::cout;
using std::endl;

int suma (int x, int y);
int mayor (int x,int y);
void  suma_dos (int x);
int main (){
  int a;
  int b;
  int c;
  int d;	
  a=1000;
  b=243;
  c= suma (a,b);
  d=mayor(a,b);
  suma_dos(a);
  cout << "La suma de los dos enteros " << a <<"y" <<b <<endl;
  cout << "es: " << c << endl;
  cout << "El mayor es:" << d << endl;
    return 0;

}
  
  int suma (int x, int y){
      return (x+y);
  }

  int mayor (int x, int y){
    if(x>y){
	return x;
	   }
    else{
	return y;
	}

   }

   void suma_dos (int x){
   cout << "adentro esto entra" << x <<endl;
   x=x+2;
   cout<< "adentro esto cambia" << x << endl;


} 
 
// int * (Devuelve la direccion donde se encuentra la variable)
// %(Variable) 




	
