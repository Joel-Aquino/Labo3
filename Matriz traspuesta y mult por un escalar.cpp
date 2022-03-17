//Matriz traspuesta y multiplicacion por un escalar
#include<iostream>
using namespace std;
int main(){
	int x, filas, columnas;
	cout<<"Que operacion quiere realizar?"<<endl;
	cout<<"1. Matriz traspuesta"<<endl;
	cout<<"2. Multiplicacion por un escalar"<<endl;
	cin>>x;
	if(x==1){
		cout<<"cuantas filas quiere que tenga la matriz a usar:"<<endl;
		cin>>filas;
		cout<<"cuantas columnas quiere que tenga la matriz a usar:"<<endl;
		cin>>columnas;
		float A[filas][columnas];
		//Formamos la matriz
		cout<<"Ingrese los elementos de la matriz :"<<endl;
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
	cout<<"La matriz traspuesta es:"<<endl;
	for(int i=0;i<filas;i++){
    		cout<< " | ";
			for(int j=0;j<columnas;j++){
			cout<<A[j] [i]<<" ";
		}
			cout<<"|\n";
	}
		
	} if(x==2){
		cout<<"cuantas filas quiere que tenga la matriz a usar:"<<endl;
		cin>>filas;
		cout<<"cuantas columnas quiere que tenga la matriz a usar:"<<endl;
		cin>>columnas;
		float A[filas][columnas],B[filas][columnas], K;
		//Formamos la matriz
		cout<<"Ingrese los elementos de la matriz :"<<endl;
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
	cout<<"Por que valor de K quiere multiplicar la matriz?"<<endl;
	cin>>K;
	cout<<"La operacion de K*A[], es:"<<endl;
	for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                B[i][j]=K*A[i][j]; //la operacion de mult. por un escalar 
        }
    }
    
    for(int i=0;i<filas;i++){
    		cout<< " | ";
			for(int j=0;j<columnas;j++){
			cout<<B[i][j]<<" ";
		}
			cout<<"|\n";
	}
		
		
	}
	
	
	return 0;
}
