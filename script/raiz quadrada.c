#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int quadrado, num;
    float raiz;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        raiz = sqrt(num);
        printf("O numero é par: ");
        printf("\n A raiz quadrada é: %.3f", raiz);
    }
    else
    {
        quadrado = num * num;
        printf("O numero é impar");
        printf("\n O numero ao quadrado é: %d", quadrado);
    }
    return 0;
}
