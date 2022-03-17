//Matriz triangular superior y Determinante de una matriz cuadrada
#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int N,i,j,k;
 	cout<<"        MATRIZ TRIANGULAR SUP. Y DETERMINANTE DE UNA MATRIZ CUADRADA     "<<endl;
 	cout<<"\n";
 	//Ingresamos los datos de la matriz
 	cout<<"Diga el orden de la matriz :"<<endl;
 	cin>>N;
 	float A[N][N],pivote,pivote1,aux,det=1;
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
	//Procedemos a reducir la matriz hasta llegar a una triangular
	for(i=0;i<N;i++){
		pivote = A[i][i];
		for(j=i+1;j<N;j++){
			pivote1 = A[j][i];
			aux = pivote1/pivote;
			for(k=0;k<N;k++)
			A[j][k]=A[j][k]-aux*A[i][k];
				
			}
		}
		cout<<"La matriz triangular es:"<<endl;
		for(i=0;i<N;i++){
    	    cout<< " | ";
			for(j=0;j<N;j++){
			cout<<A[i] [j]<<"     ";
		}
			cout<<"|\n";
	}
	for(i=0;i<N;i++){
		det*=A[i][i];
	}
	cout<<"el determinante de la matriz vale:  "<<det;
	
	return 0;
	}
	
	
