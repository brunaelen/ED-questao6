#include <stdio.h>
#include <stdlib.h>

int main () {
    int matriz[][4]={
        {45,32,83,95},
        {26,14,37,42},
        {40,43,65,77},
        {74,79,48,55}
        };
    int i, n, num;

	    for (i = 0; i < 4; i++) {
            for (n = 0; n < 4; n++) {
		printf ("%d\t", matriz[i][n]);
            }     
	    }
            for (i = 0; i < 4; i++) {
                printf ("\nQual e o valor que deseja buscar? ");
		scanf ("%d", &num);
                for (n = 0; n < 4; n++) {
                
                if (matriz[i][n]==num) {
		    printf ("%d ocorre na posicao [%d][%d] do vetor.\n", num, i, n);	
        	    return 0;	
		}
                }
        }
}
