#include <stdio.h>
int suma_gauss();
int suma_repetitiva();

int main() 
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);
    
    printf("Suma Gaussiana: %i\n", suma_gauss(num));
    printf("Suma repetitiva: %i\n", suma_repetitiva(num));
}

int suma_gauss(int num) 
{
    int result = (num * (num + 1))/2;
    return result;
}

int suma_repetitiva(int num)
{
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result += i;
    }
    return result;
}
