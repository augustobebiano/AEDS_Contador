#include "matriz.h"

void contador(int m){
    int k = 3;
    int mat[k][k];
	for(int cont=0; cont<m; cont++){
        for(int cont2=0; cont2<m; cont2++){
            mat[cont][cont2] = rand()%99;
            printf("%d\t", mat[cont][cont2]);
        }
        printf("\n");
    }
    int n = m-1;
	int i = 0;
	int j = 0;
	int soma = mat[0][0];
	mat[0][0] = -1;

	while(i!=n || j!=n){
		if(i!=n && j!=n && j!=0){
			if(mat[i+1][j]>=mat[i][j-1] && mat[i+1][j]>=mat[i][j+1]){
				soma = soma + mat[i+1][j];
                mat[i+1][j] = -1;
				i++;
			}else{
				if(mat[i][j+1]>=mat[i][j-1]){
					soma = soma + mat[i][j+1];
                    mat[i][j+1] = -1;       
					j++;
				}else{
					soma = soma + mat[i][j+1];
                    mat[i][j+1] = -1;      
					j--;
				}
			}
		}else{
			if(j==0 && i!=n){
				if(mat[i+1][j]>=mat[i][j+1]){
					soma = soma + mat[i+1][j];
                    mat[i+1][j] = -1;
					i++;
				}else{
					soma = soma + mat[i][j+1];
                    mat[i][j+1] = -1;
					j++;
				}
			}else{
				if(j==n && i!=n){
					if(mat[i+1][j]>=mat[i][j-1]){
						soma = soma + mat[i+1][j];
						mat[i+1][j] = -1;
						i++;
					}else{
						soma = soma + mat[i][j+1];
						mat[i][j+1] = -1;
						j--;
					}
				}else{
					soma = soma + mat[i][j+1];
					mat[i][j+1] = -1;
					j++;
				}
			}
		}
	}
    
    printf("Soma: %d\n", soma);

    for(int cont=0; cont<m; cont++){
        for(int cont2=0; cont2<m; cont2++){
            if(mat[cont][cont2]==-1){
                printf("X\t");
            }else{
                printf("%d\t", mat[cont][cont2]);
            }
        }
        printf("\n");
}
