#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binario_decimal(int numB){
	int decimal = 0, base = 0, r;
	while(numB != 0){
		r = numB%10;
		decimal = decimal+r*pow(2, base);
		numB = numB/10;
		base++;
	}
	return decimal;
}

void decimal_binario(int numD){
	int binario[32], i, j;
	if(numD == 0){
			printf("%d", numD);
		}
		while(numD > 0){
			binario[i] = numD%2;
			numD = numD/2;
			i++;
		}
		for(j=i-1; j>=0; j--){
			printf("%d ", binario[j]);
		}
}

int main(int argc, char *argv[]) {
	int num1, num2, suma;
	printf("Ingresa el primer numero en binario: ");
	scanf("%d", &num1);
	printf("Ingresa el segundo numero en binario: ");
	scanf("%d", &num2);
	suma = binario_decimal(num1) + binario_decimal(num2);
	printf("\nLa suma es:\n");
	decimal_binario(suma);
	printf("\n\nFin del programa.");
	return 0;
	}
