#include <stdio.h>
#include <math.h>
#include "coordenadas.h"
#include "eventos.h"
#define RANGE 10

float fun_dist_euclid(float difx, float dify, float difz){
	return sqrt(pow(difx, 2) + pow(dify, 2) +pow(difz, 2));

}

int main(){
int i= 0, j = 0, cont = 0;
float difx;
//float teste[3];
float dify;
float difz;	

/*
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			teste[cont] = mote_coordenadas[i][j];
			cont++;		
		}	
	}
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf("%.2f\n", teste[i])
		}	
	}
*/	 
	difx = mote_coordenadas[0][0] - eventos_coordenadas[0][0];
	dify = mote_coordenadas[0][1] - eventos_coordenadas[0][1];
	difz = mote_coordenadas[0][2] - eventos_coordenadas[0][2];
	
	printf("difx = %.3f\n", difx);
	printf("dify = %.3f\n", dify);
	printf("difz = %.3f\n", difz);	
	printf("%.3f\n", fun_dist_euclid(difx, dify, difz));
/*
	if (fun_dist_euclid(difx, dify) <= RANGE){
		printf("O evento ocorre.\n");
	
	}
*/
}



