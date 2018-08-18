#include <stdlib.h>
#include <stdio.h>

int
main(void){
	int n = 0,
	    m = 0,
            i = 0;

	printf("Insira um numero para N e M: ");
	scanf("%d %d", &n, &m);

	while( n >= m ){
		printf("O valor de N deve ser menor que M\n");
		printf("Insira um numero para N e M: ");
		scanf("%d %d", &n, &m);
	}

	for( i = n ; i <= m ; i++ ){
		if( i % 3 == 0 )
			printf("Multiplo de tres: %d\n", i);
		if( i % 4 == 0 )
			printf("Multiplo de quatro: %d\n", i);
		if( i % 7 == 0 )
			printf("Multiplo de sete: %d\n", i);
	}

	return 0;
}
