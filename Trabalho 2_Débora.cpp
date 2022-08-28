#include <stdio.h>
/*
    Miguel Angelo de Lima Godoi, Nº26, INI-1B Turma BB
    Yuri Ribeiro de Oliveira, Nº35 INI-1B Turma BB
*/
float vf;

usuario(int user)
{
    
    do
    {
    	if(user >4 or user <1)
    	continue;
        switch (user)
        {

        case 1:
            printf("Usuario tipo 1 ");
            printf("\nAumento de 10%% na mensalidade");
            user = 1;
            return user;
            break;

        case 2:
            printf("Usuario tipo 2 ");
            printf("\nAumento de 15%% na mensalidade");
            user = 2;
            return user;
            break;

        case 3:
            printf("Usuario tipo 3 ");
            printf("\nAumento de 20%% na mensalidade");
            user = 3;
            return user;
            break;

        default:
            printf("Tipo de usuario inexistente");
            printf("\n Digite novamente");
        }
    }while(user <=0 or user >=4);
}

calculo(float vi, int user)
{

    float result = vi * 100;
    switch (user)
    {
    case 1:
        result = (result / 100) * 10;
        result /= 100;
        break;

    case 2:
        result = (result / 100) * 15;
        result /= 100;
        break;

    case 3:
        result = (result / 100) * 20;
        result /= 100;
        break;

    default:
        printf("Valor Invalido");
    }
    vf = vi + result;
};

int main(void)
{

    float vi;
    int user;
    printf("Digite o valor da mensalidade: ");
    scanf("%f", &vi);
    printf("Digite o tipo de usuario: ");
    scanf("%d", &user);
    usuario(user);
    calculo(vi, user);
    printf("\nValor final da mensalidade eh: R$%.2f", vf);
}
