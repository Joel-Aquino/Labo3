//Division de dos matrices A y B
#include<iostream>
#include<cmath>
 using namespace std;
 int main (){
 	cout<<"         DIVISION DE MATRICES DE ORDEN NxN \n   "<<endl;
 	int N;
 	float A[100][100], B[100][100], C[100][100];
 	//Ingresamos los datos de cada matriz
 	
 	//Para la MATRIZ A:
 	cout<<"Diga el orden de la matriz A:"<<endl;
 	cin>>N;
 	cout<<"Ingrese los elementos de la matriz A:"<<endl;
 	for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                cout<<"Digite el elemento ["<<i<<"]["<<j<<"] = ";cin>>A[i][j];
        }
    }
    for(int i=0;i<N;i++){
    	    cout<< " | ";
			for(int j=0;j<N;j++){
			cout<<A[i] [j]<<" ";
		}
			cout<<"|\n";
	}
	
	//Para la MATRIZ B:
	cout<<"Recordar que el nro de filas de B, debe ser igual al nro de columnas de A"<<endl;
	cout<<"Por lo que Filas de B = Columnas de A "<<endl;
	cout<<"Ingrese los elementos de la matriz B:"<<endl;
 	for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                cout<<"Digite el elemento ["<<i<<"]["<<j<<"] = ";cin>>B[i][j];
        }
    }
    for(int i=0;i<N;i++){
    		cout<< " | ";
			for(int j=0;j<N;j++){
			cout<<B[i] [j]<<" ";
		}
			cout<<"|\n";
	}
	cout<<"|\n";
	/*Como la division no es posible, hallamos la inversa de la matriz
 B para multiplicar por su inversa*/
 
 //Generamos la matriz identidad
 int i,j,k;
 float I[100][100], Aux, Pivote;
 for(int i=0;i<N;i++){
        for(j=0;j<N;j++){
            if (i==j){
                I[i][j]=1;

            }else{
                I[i][j]=0;
            }
        }
    }
    for(i=0;i<N;i++){
            cout<< " | ";
            for(j=0;j<N;j++){
            cout<<I[i] [j]<<" ";
        }
            cout<<"|\n";
    }
    //Empezamos a reducir la matriz dada, hasta llegar a la matriz identidad
    
    for(i=0; i<N;i++){
    	Pivote = B[i][i];
		for(k=0;k<N;k++){
			B[i][k] = B[i][k]/Pivote;
			I[i][k] = I[i][k]/Pivote;
			
			
		} 
		for(j=0;j<N;j++){
			if(i!=j){
				Aux = B[j][i];
				for(k=0;k<N;k++){
					B[j][k] = B[j][k] - Aux*B[i][k];
					I[j][k] = I[j][k] - Aux*I[i][k];
				}
				
			}
		}
	}
	cout<<"\n";
	for(i=0;i<N;i++){
    	    cout<< " | ";
			for(j=0;j<N;j++){
			cout<<B[i] [j]<<" ";
		}
			cout<<"|\n";
			}
	cout<<"|\n";
	
	
    for(i=0;i<N;i++){
            cout<< " | ";
            for(j=0;j<N;j++){
            cout<<I[i] [j]<<" ";
        }
            cout<<"|\n";
    }
    //Ahora realizamos la operacion de PRODUCTO:
	cout<<"La division de las matrices A y B es:"<<endl;
	for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        	for(int k=0;k<N;k++){
        		C[i][j] += A[i][k]*I[k][j]; //la operacion de producto realizada
			}
                 
        }
    }
    
    for(int i=0;i<N;i++){
    		cout<< " | ";
			for(int j=0;j<N;j++){
			cout<<C[i][j]<<" ";
		}
			cout<<"|\n";
	}
	
	
    
    return 0;
 }
 //Fin del programa	
