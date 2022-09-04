#include <stdio.h>
/*
    Miguel Angelo de Lima Godoi Nº26 INI-1B Turma: BB
    Yuri Ribeiro de Oliveira Nº35 INI-1B Turma: BB
*/
void dados(int *hora_sem, float *val_hora)
{

    printf("Digito o numero total de horas trabalhadas na semana: ");
    scanf("%d", hora_sem);
    printf("Digite o valor de sua hora trabalhada: ");
    scanf("%f", val_hora);
}

void calculo(int hora_sem, float val_hora)
{
    float sal_total;
    float adicional_sal;
    int hora_exec = hora_sem - 40;
    int hora_60 = hora_sem - 60;
    int hora_t = hora_exec - hora_60;
    switch (hora_sem)
    {

    case 0 ... 40:
        printf("Sem adicional");
        sal_total = adicional_sal + (hora_sem * val_hora);
        printf("\nSalario total: R$%.2f", sal_total);
        break;

    case 41 ... 60:
        adicional_sal = hora_exec * (val_hora + (val_hora/2));
        printf("Voce tem direito a um adicional de: R$%.2f que corresponde a um bonus de 50%%", adicional_sal);
        sal_total = adicional_sal + ((hora_sem - hora_exec) * val_hora);
        printf("\nSalario total: R$%.2f", sal_total);
        break;

    default:
        adicional_sal = (hora_t * val_hora * 1.5) + hora_60 * (val_hora * 2);
        printf("Voce tem direito a um adicional de: R$%.2f que corresponde a um bonus de 100%%", adicional_sal);
        sal_total = adicional_sal + 40 * val_hora;
        printf("\nSalario total: R$%.2f", sal_total);
    }
}

int main(void)
{
    int hora_sem;
    float val_hora;
    dados(&hora_sem, &val_hora);
    calculo(hora_sem, val_hora);
}

