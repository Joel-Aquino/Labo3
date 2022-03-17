//Inversa de una matriz
#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int N,i,j,k;
 	cout<<"        INVERSA DE UNA MATRIZ CUADRADA     "<<endl;
 	cout<<"\n";
 	//Ingresamos los datos de la matriz
 	cout<<"Diga el orden de la matriz :"<<endl;
 	cin>>N;
 	float A[N][N], I[N][N],Pivote,Aux;
 	cout<<"Ingrese los elementos de la matriz :"<<endl;
 	for(i=0;i<N;i++){
        for(j=0;j<N;j++){
                cout<<"Digite el elemento ["<<i<<"]["<<j<<"] = ";cin>>A[i][j];
        }
    }
    for(i=0;i<N;i++){
    	    cout<< " | ";
			for(j=0;j<N;j++){
			cout<<A[i] [j]<<" ";
		}
			cout<<"|\n";
	}
	cout<<"|\n";
	//Generamos la matriz identidad
	for(i=0;i<N;i++){
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
    	Pivote = A[i][i];
		for(k=0;k<N;k++){
			A[i][k] = A[i][k]/Pivote;
			I[i][k] = I[i][k]/Pivote;
			
			
		} 
		for(j=0;j<N;j++){
			if(i!=j){
				Aux = A[j][i];
				for(k=0;k<N;k++){
					A[j][k] = A[j][k] - Aux*A[i][k];
					I[j][k] = I[j][k] - Aux*I[i][k];
				}
				
			}
		}
	}
	cout<<"\n";
	for(i=0;i<N;i++){
    	    cout<< " | ";
			for(j=0;j<N;j++){
			cout<<A[i] [j]<<" ";
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
	
	
	
	
	return 0;
}
//Fin del programa
