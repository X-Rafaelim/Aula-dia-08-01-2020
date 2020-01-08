#include <stdio.h>

int main(){
    const int moradia = 550;
    const int terreno = 300;
    const int quinta = 200;
    const int armazem = 600;
    int menu;
    int tipo;
    int local;
    float area;
    float soma; 
    float soma2;
    float areaPreco;
    int valorMetro;
    int valorMetro2;







    printf("------------------Menu------------------\n");
    printf("Negocio\n");
    printf("1- Compra\n");
    printf("2-Venda\n");
    scanf(" %d", &menu);

    printf("Tipo");
    printf("1-Moradia");
    printf("2-Terreno\n");
    printf("3-Quinta\n");
    printf("4-Armazem\n");
    scanf(" %d", &tipo );

    printf("Localização");
    printf("1-PDL\n");
    printf("2-Lagoa\n");
    printf("3-Nordeste\n");
    scanf(" %d", &local);

    printf("Area\n");
    printf("Diga a area\n");
    scanf(" %f", &area);

    //Saber que tipo de edificio vai comprar e adiciona o preço do edificio a soma
    if (tipo == 1)
    {
        soma = moradia;
        valorMetro = soma;
    }
    else if (tipo == 2)
    {
        soma = terreno;
        valorMetro = soma;
    }
    else if (tipo == 3)
    {
        soma = quinta;
        valorMetro = soma;
    }
    else if (tipo == 4)
    {
        soma = armazem;
        valorMetro = soma;
    }
    printf("Teste\n");


    // multiplica o valor do metro m^2
    soma = area * soma;


    


    //adiciona a soma ou subtrai atravez da escolha da zona
    if (local == 1)
    {
        if (menu == 1)
        {
            soma2 = soma * 0.04;
            soma = soma - soma2;
            valorMetro2 = valorMetro * 0.04;
            valorMetro = valorMetro - valorMetro2;
        }
        else if (menu == 2)
        {
            soma2 = soma * 0.05;
            soma = soma2 + soma;
            valorMetro2 = valorMetro * 0.05;
            valorMetro = valorMetro2 + valorMetro;

        }  
        printf("Teste\n");
    }
    else if (local == 2)
    {
        if (menu == 1)
        {
            soma2 = soma * 0.03;
            soma = soma - soma2;
            valorMetro2 = valorMetro * 0.04;
            valorMetro = valorMetro + valorMetro2;
        }
        else if (menu == 2)
        {
            soma2 = soma * 0.02;
            soma = soma + soma2;
            valorMetro2 = valorMetro * 0.02;
            valorMetro = valorMetro2 + valorMetro;
        } 
        printf("Teste\n");
    }
    else if (local == 3)
    {
        if (menu == 1)
        {
            soma2 = soma * 0.30;
            soma = soma - soma2;
            valorMetro2 = valorMetro * 0.30;
            valorMetro = valorMetro + valorMetro2;
        }
        else if (menu == 1)
        {
            soma2 = soma * 0.01;
            soma = soma + soma2;
            valorMetro2 = valorMetro * 0.01;
            valorMetro = valorMetro + valorMetro2;

        }
        printf("Teste\n");







        // da print de tudo o que é preciso 
        if (menu == 1)
        {
            printf("Negocio - Compra\n");
        }
        else if (menu == 1)
        {
            printf("Negocio - venda\n");
        }

        if (tipo == 1)
        {
            printf("Tipo - Moradia\n");
        }
        else if (tipo == 2)
        {
            printf("Tipo - Terreno\n");
        }
        else if (tipo == 3)
        {
            printf("Tipo - Quinta\n");
        }
        else if (tipo == 4)
        {
            printf("Tipo - Armazem\n");
        }

        if (local == 1)
        {
            printf("local - PDL\n");
        }
        else if (local ==2)
        {
            printf("local - Lagoa\n");
        }
        else if (local == 3)
        {
            printf("local - Nordeste\n");
        }
        printf(" Valor m^2\n");
        printf("Area total");
        printf("Valor total %f", soma);

        return 0;


        




        
        
        

        
        
        
        
        
        



        
        
        
    }
    
    
    
    
    
    



    



}