#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float a, float b) {
	return a + b;
}

float subt(float a, float b) {
	return a - b;
}

float mult(float a, float b) {
	return a * b;
}

float divi (float a, float b) {
	if (b == 0) {
		printf("Divisão por zero não permitida");
		exit(EXIT_FAILURE);
	}
	return a / b;
}

float pot (float base, int expo) {
	int i;
	float p = 1;
	
	for (i = 1; i <= expo; i++) {
		p *= base; // p = p * base
	}
	
	return p;
}

int main() {
	float a, b, r;
	char oper;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a operação: ");
	scanf("%f %c %f", &a, &oper, &b);
	
	switch(oper) {
		case '+': r = soma(a, b); break;
		case '-': r = subt(a, b); break;
		case '*': r = mult(a, b); break;
		case '/': r = divi(a, b); break;
		case '^': r = pot(a, b); break;
		default:
			printf("Operação não permitida");
			exit(EXIT_FAILURE);
	}
	printf("%.2f %c %.2f = %.2f", a, oper, b, r);
	
	exit(EXIT_SUCCESS);
}
