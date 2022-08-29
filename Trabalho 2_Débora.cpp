#include <stdio.h>
/*
    Miguel Angelo de Lima Godoi, Nº26, INI-1B Turma BB
    Yuri Ribeiro de Oliveira, Nº35 INI-1B Turma BB
*/
float vf;

float usuario(int user)
{
    do
    {

        if (user <= 0 or user >= 4)
            printf("Usuario Invalido, redigite. ");
        	scanf("%d", &user);
    } while (user <= 0 or user >= 4);
    return user;
}

float calculo(float vi, int user)
{
    switch (user)
    {
    case 1:
        vf = vi * 1.1;
        break;

    case 2:
        vf = vi * 1.15;
        break;

    case 3:
        vf = vi * 1.2;
        break;

    default:
        printf("Valor Invalido");
    }
}

int main(void)
{
    float vi;
    int user;
    printf("Digite o valor da mensalidade: ");
    scanf("%f", &vi);
    printf("\nDigite o tipo de usuario: ");
    scanf("%d", &user);
    user = usuario(user);
    calculo(vi, user);
    printf("\nValor final da mensalidade eh: R$%.2f", vf);
}
