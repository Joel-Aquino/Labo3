//SUMA Y RESTA DE MATRICES DE ORDEN MxN
#include<iostream>
#include<cmath>
 using namespace std;
 int main (){
 	int filas, columnas;
 	cout<<"       SUMA Y RESTA DE DOS MATRICES DE ORDEN MxN   "<<endl;
 	cout<<"Diga el numero de filas de las matrices a usar:"<<endl;
 	cin>>filas;
 	cout<<"Diga el numero de columnas de las matrices a usar:"<<endl;
 	cin>>columnas;
 	float A[filas][columnas], B[filas][columnas], C[filas][columnas];
 	//Ingresamos los datos de cada matriz
 	
 	//Para la MATRIZ A:
 	cout<<"Ingrese los elementos de la matriz A:"<<endl;
 	for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                cout<<"Digite el elemento ["<<i<<"]["<<j<<"] = ";cin>>A[i][j];
        }
    }
    for(int i=0;i<filas;i++){
    		cout<< " | ";
			for(int j=0;j<columnas;j++){
			cout<<A[i] [j]<<" ";
		}
			cout<<"|\n";
	}
	
	//Para la MATRIZ B:
	cout<<"Ingrese los elementos de la matriz B:"<<endl;
 	for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                cout<<"Digite el elemento ["<<i<<"]["<<j<<"] = ";cin>>B[i][j];
        }
    }
    for(int i=0;i<filas;i++){
    		cout<< " | ";
			for(int j=0;j<columnas;j++){
			cout<<B[i] [j]<<" ";
		}
			cout<<"|\n";
	}
	//Ahora realizamos la operacion de SUMA:
	cout<<"La suma de las matrices A y B es:"<<endl;
	for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                C[i][j]=A[i][j]+B[i][j]; //la operacion e suma realizada 
        }
    }
    
    for(int i=0;i<filas;i++){
    		cout<< " | ";
			for(int j=0;j<columnas;j++){
			cout<<C[i][j]<<" ";
		}
			cout<<"|\n";
	}
	
	//Ahora realizamos la operacion de RESTA:
	cout<<"La resta de las matrices A y B es:"<<endl;
	for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                C[i][j]=A[i][j]-B[i][j]; //la operacion e suma realizada 
        }
    }
    
    for(int i=0;i<filas;i++){
    		cout<< " | ";
			for(int j=0;j<columnas;j++){
			cout<<C[i][j]<<" ";
		}
			cout<<"|\n";
	}
    
    return 0;
}
//Fin del programa
