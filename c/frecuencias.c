//Escribe un programa que cuente la frecuencia de cada elemento de un arreglo.

#include <stdio.h>

void main(){
	int arr[100], freq[100];
	int n, i, j, ctr;
	
	printf("------------------------------------------------\n");	
	printf("Ingrese la cantidad de elementos que tendrá el arreglo:");
	scanf("%d",&n);
   
	printf("Añadiendo %d elementos:\n",n);
	
	for(i=0;i<n;i++){
		printf("elemento - %d : ",i);
		scanf("%d",&arr[i]);
		freq[i] = -1;
	}
    
    for(i=0; i<n; i++){
    	ctr = 1;
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
            	ctr++;
                freq[j] = 0;
            }
        }

        if(freq[i]!=0){
            freq[i] = ctr;
        }
    }

    printf("\nImprimiendo la frecuencia de todos los elementos: \n");
    
    for(i=0; i<n; i++){
        if(freq[i]!=0){
            printf("%d ocurre %d veces\n", arr[i], freq[i]);
        }
    }
}