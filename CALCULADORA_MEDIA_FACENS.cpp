//Biblioteca padrão.
#include <iostream>
//Biblioteca padrão.
#include <stdlib.h>
//Evita o uso de "std::" noc códigos.
using namespace std;
//Corpo principal.
int main() {
    //Declaração das variáveis.
    int RA;
    double ac1, ac2, ag, af;
    char continuar;
    //Coloquei string porque no char dava algum tipo de erro. Depois que eu escrevia o nome todas as linhas seguintes ficavam juntas. Não sabia o que fazer D:
    string nome;
    //Codigo que deverá se repetir caso a condição seja cumprida.
    do{
    //Interface interativa.    
    cout << "Informe seu nome: ";
    //Lê e armazena as informações na variável.
    cin >> nome;
    //Interface interativa.
    cout << "Informe seu RA: ";
    //Lê e armazena as informações na variável.
    cin >> RA;
    //Interface interativa.
    cout << "Informe sua nota na AC1: ";
    //Lê e armazena as informações na variável.
    cin >> ac1;
    //Interface interativa.
    cout << "Informe sua nota na AC2: ";
    //Lê e armazena as informações na variável.
    cin >> ac2;
    //Interface interativa.
    cout << "Informe sua nota na AG: ";
    //Lê e armazena as informações na variável.
    cin >> ag;
    //Interface interativa.
    cout << "Informe sua nota na AF: ";
    //Lê e armazena as informações na variável.
    cin >> af;
    //Calculo feito para saber a média da Facens usando seus pesos.
    double soma = ((ac1*1.5) + (ac2*3.5) + (ag*1) + (af*4));
    //Final do calculo dando a media final.
    double media = soma/10;
    //Interface sem interação, mostra apenas nossa nota.
    cout << "Sua média foi: " << media << endl;
    //Comando que substitui o uso de vários "IF...ELSE" e testa a condicional.
    switch((int)media){
        //Caso nossa média esteja entre 10 e 5 aqui será ativado.
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
            //Interface que aparece caso a média seja maior que 5, indica aprovação.
            cout << "Parabéns, você foi aprovado!"<< endl;
            //Finaliza essa parte do código.
            break;
        //Mesma ideia da anterior, mas agora com outros números. Vale a pena notar que números como "3.5" estão inclusos aqui.    
        case 4:
        case 3:
            //Janela que aparece caso a media esteja entre 3 e 4.
            cout << "Foi quase! Terá que fazer recuperação." << endl;
            //Finaliza essa parte do código caso seja acionada.
            break;
        //Mesma ideia do Else. Basicamente, se nada anterior funcionar esse daqui entre em ação.    
        default:
            //Ultima janela do Switch, se aparecer é porque nada anterior foi cumprido.
            cout << "Você foi reprovado." << endl;
    }
    //Interface interativa que possibilita recomeçar tudo de novo.
    cout << "Deseja continuar? (s/n)"<< endl;
    //Lê e armazena a informação na variável.
    cin >> continuar;
    //Condição da repetição, caso a variável atenda os requisitos o código ficará repetindo, ou parar se tiver algo diferente.
    }while(continuar == 's' ||continuar == 'S');
    return 0;
}
