/*Factorizacion LU, consite en expresar un matriz cuadrada en otras dos matrices
L y U*/
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int i=0,j=0,k=0,n=0;

	cout << "         FACTORIZACION LU         "<<endl;
	cout<<"\n";

	cout << "Ingresa el orden de la matriz: ";
	cin >> n;

    float A[n][n]={0}, B[n]={0}, X[n]={0}, L[n][n]={0}, Y[n]={0}, U[n][n]={0},sum=0;
    cout << endl << endl;

    //Formamos la Matriz A
    cout<<"Ingrese los elementos de la matriz: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << "Ingrese el elemento A["<<i+1<<"]["<<j+1<<"]: ";
            cin >> A[i][j];
        }
    }
    cout << endl;
    for(i=0;i<n;i++){
    	    cout<< " | ";
			for(j=0;j<n;j++){
			cout<<A[i] [j]<<"  ";
		}
			cout<<"|\n";
	}
	cout<<"|\n";
    //Procedimiento para la factorizacion LU

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if(i>j){
              U[i][j]=0;    
            }
            else if(i==j){
              L[i][j]=1;    
            } else{
              L[i][j]=0;    
            }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum=0;
            if(i<=j){               
                for(k=0;k<n;k++){
                    if(k!=i){
                        sum=sum+L[i][k]*U[k][j];
                    }else {
                        U[i][j]=A[i][j]-sum;               
                    }
                }
            } else{                 
                for(k=0;k<n;k++){
                    if(k!=j){
                        sum=sum+L[i][k]*U[k][j];
                    }else {
                        L[i][j]=(A[i][j]-sum)/U[j][j];      
                    }
                }
            }
        }
    }
   cout <<"L = "<<endl;
    for(i=0;i<n;i++){
    	    cout<< " | ";
			for(j=0;j<n;j++){
			cout<<L[i] [j]<<"  ";
		}
			cout<<"|\n";
	}
	cout<<"|\n";
	
	cout <<"U = "<<endl;
    for(i=0;i<n;i++){
    	    cout<< " | ";
			for(j=0;j<n;j++){
			cout<<U[i] [j]<<"  ";
		}
			cout<<"|\n";
	}
	cout<<"|\n";
   return 0;
}
//Fin del programa

