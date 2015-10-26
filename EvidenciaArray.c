#include<stdio.h>


int arregloS[5];
int *apuntador;
int i;

int main(){

        int arregloI[5];

        arregloI[0]=10;
        arregloI[1]=12;
        arregloI[2]=22;
        arregloI[3]=32;
        arregloI[4]=42;

        CopiarArreglo(arregloI,arregloS);
        imprimir();
}






int CopiarArreglo(int *arregloI, int *arregloS){

	for (i=0; i<5; i++){
	*(arregloS+i)=*(arregloI+i);

	} 
	
	//printf("ArregloI[%d]=%d\n",i,*(arregloS+i));	
}

int imprimir(){

	for(i=0;i<5;i++){
	
		printf("ArregloS[%d]=%d\n",i,*(arregloS+i));
	}

}

