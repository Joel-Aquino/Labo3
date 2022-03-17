//Multiplicacion de dos matrices A y B
#include<iostream>
#include<cmath>
 using namespace std;
 int main (){
 	cout<<"         MULTIPLICACION DE MATRICES DE ORDEN MxN \n   "<<endl;
 	int filasA, columnasA, columnasB;
 	float A[100][100], B[100][100], C[100][100];
 	//Ingresamos los datos de cada matriz
 	
 	//Para la MATRIZ A:
 	cout<<"Diga el numero de filas de la matriz A:"<<endl;
 	cin>>filasA;
 	cout<<"Diga el numero de columnas de la matriz A:"<<endl;
 	cin>>columnasA;
 	cout<<"Ingrese los elementos de la matriz A:"<<endl;
 	for(int i=0;i<filasA;i++){
        for(int j=0;j<columnasA;j++){
                cout<<"Digite el elemento ["<<i<<"]["<<j<<"] = ";cin>>A[i][j];
        }
    }
    for(int i=0;i<filasA;i++){
    	    cout<< " | ";
			for(int j=0;j<columnasA;j++){
			cout<<A[i] [j]<<" ";
		}
			cout<<"|\n";
	}
	
	//Para la MATRIZ B:
	cout<<"Recordar que el nro de filas de B, debe ser igual al nro de columnas de A"<<endl;
	cout<<"Por lo que Filas de B = Columnas de A "<<endl;
	cout<<"Diga el numero de columnas de la matriz B:"<<endl;
	cin>>columnasB;
	cout<<"Ingrese los elementos de la matriz B:"<<endl;
 	for(int i=0;i<columnasA;i++){
        for(int j=0;j<columnasB;j++){
                cout<<"Digite el elemento ["<<i<<"]["<<j<<"] = ";cin>>B[i][j];
        }
    }
    for(int i=0;i<columnasA;i++){
    		cout<< " | ";
			for(int j=0;j<columnasB;j++){
			cout<<B[i] [j]<<" ";
		}
			cout<<"|\n";
	}
	//Ahora realizamos la operacion de PRODUCTO:
	cout<<"El producto de las matrices A y B es:"<<endl;
	for(int i=0;i<filasA;i++){
        for(int j=0;j<columnasA;j++){
        	for(int k=0;k<columnasB;k++){
        		C[i][j] += A[i][k]*B[k][j]; //la operacion de producto realizada
			}
                 
        }
    }
    
    for(int i=0;i<filasA;i++){
    		cout<< " | ";
			for(int j=0;j<columnasA;j++){
			cout<<C[i][j]<<" ";
		}
			cout<<"|\n";
	}
	
	
    
    return 0;
}
//Fin del programa
