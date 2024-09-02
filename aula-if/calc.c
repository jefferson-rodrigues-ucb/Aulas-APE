#include <stdio.h>

int main() {
	float a, b;
	char oper;
	
	printf("Digite a operacao: ");
	scanf("%f %c %f", &a, &oper, &b);
	
	switch(oper) {
		case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b);break;
		case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b);break;
		case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b);break;
		case '/':
			if (b != 0){
				printf("%.2f / %.2f = %.2f\n", a, b, a / b);
			} else {
				printf("Divisor nao pode ser zero.");
			}
			break;
		default: printf("Operacao invalida.");
	}
}
