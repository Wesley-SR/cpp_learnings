#include <stdio.h>
#include <math.h>
#include<string>

// Programa de Signos 
// Ramon Barbosa 03.04.2012


int main()
{
    int month_aux, day,
    last_day_sign[13]={0,21,20,21,21,21,21,22,23,23,23,22,22};

    char signos[13][12]={"Capricornio", "Aquario", "Peixes", "Aries", "Touro", "Gemeos", "Cancer", "Leao", "virgem", "libra", "Escorpiao", "Sagitario", "Capricornio"};

    do{
                          printf("Este programa dira qual o seu signo de acordo com sua data de nascimento\n\n");
                          printf("Qual o day do seu nascimento\n");
                          scanf("%i",&day);
                          system("cls");
                          printf("Qual o month_aux do seu nascimento\n");
                          scanf("%i",&month_aux);
                          system("cls");

                                        if (day < last_day_sign[month_aux])
                                        month_aux = month_aux-1;

                           printf("Seu signo e %s\n\n",signos[month_aux]);
                           //printf("signos[0] = %s\n\n",signos[0]);
                           
       }while(day != 0 || month_aux != 0);
       system("cls");
       printf("Programa fializado\n\n");
       system("PAUSE");
       return(0);
}
