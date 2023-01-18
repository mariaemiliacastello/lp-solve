#include <stdlib.h>
#include <stdio.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n); 
	double capacidades[m], demandas[n], custos[m*n];
	for(int i=0;i<m;i++){
		scanf("%lf", &capacidades[i]);
	}
	for(int i=0;i<n;i++){
                scanf("%lf", &demandas[i]);
        }
	for(int i=0;i<m*n;i++){
                scanf("%lf", &custos[i]);
        }
	printf("min: ");
	int index=0;
	for(int i=1;i<=m;i++){
                for(int j=1;j<=n;j++){
                        printf("%lfx%d%d ", custos[index], i, j);
			if( j != n)
                                printf("+ ");
			index++;
                }
        }
	printf(";\n");
	for(int i=1;i<=m;i++){
		printf("\t");
		for(int j=1;j<=n;j++){
			printf("x%d%d ", i, j);
			if( j != n)
				printf("+ ");
		}
		printf("<= %lf;\n", capacidades[i-1]);
	}
        for(int j=1;j<=n;j++){
		printf("\t");
                for(int i=1;i<=m;i++){
			printf("x%d%d ", i, j);
                        if( i != m)
                                printf("+ ");
                }
                printf("= %lf;\n", demandas[j-1]);
        }
	for(int i=1;i<=m;i++){
                for(int j=1;j<=n;j++){
			printf("\t");
                        printf("x%d%d >= 0;\n", i, j);
                }
        }
	return 0;
}
