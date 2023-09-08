/*Verificar se três números formam um triângulo e, se sim, identificar o tipo de triângulo */
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados do triangulo (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);
	int cond01 = a + b > c;
	int cond02 = a + c > b;
	int cond03 = c + b > a;
    int ehTriangulo = cond01 && cond02 && cond03;
    int ehEquilatero =  ((a == b && b == c));
    int ehIsoceles =  ((a == b || b == c || a == c));
    
    if(ehTriangulo){
        if(ehEquilatero)
            printf("Triangulo equilatero.\n");
        } if (ehIsoceles) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}



