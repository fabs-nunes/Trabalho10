#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//Variáveis que podem ser usadas
   	unsigned int x[200];
   	int y; 
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//zera os valores
	for(y=0;y<=199;y++){
		x[y]=0;
	}
	
	//ler os valores 
	while(1){
		printf("valor: ");
		scanf("%d", &k);
		//escrevendo bit a bit
		if(k>=0&&k<=5000){
			x[k/32]= x[k/32] | (1<<(k%32));
		}
		else if(k == -1){ 
			break;
		}
		else{
			printf("digite valores validos\n");
			continue;
		}
	}

	//printando tudo
	for(i=0; i<=5000; i++){
		if (x[i / 32] & (1 << (i % 32))){
			printf("%d - ",i);
		}
	}

	return 0;  
}
