#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int num = 0, num2 = 0, num3 = 0, rounds = 0, b3 = 0, b5 = 0, b7 = 0, vic = 0;
    char j1 = 0, j2 = 0;

    cout << "Hello players!" << endl;

    cout << "Voces estao no esqueleto prototipo do OpenPo, onde a magica acontece" << endl;

    cout << "Como nao foi possivel usar o OpenCV, serao usadas variaveis provisorias "
            "para determinar o que seriam movimentos da cabeca, entao digite o numero do lado "
            "da opcao desejada \n" << endl;

    cout << " ___| Duelar!!!  (1)\n"
            " ___| Sair       (2)" << endl;
        cin >> num;

            while(1) {
              if(num == 1) {
                cout << "___| Singleplayer!  (1) \n"
                        "___| Multiplayer!   (2) " << endl;
                    cin >> num2;

                while(1) {
                    if(num2 == 1) /* Singleplayer */ {
                        cout << "___| Melhor de 3  (1) \n"
                                "___| Melhor de 5  (2) \n"
                                "___| Melhor de 7  (3) \n"
                                "___| Infinito     (4)" << endl;

                                //switch case de modos
                        cin >> num3;
                        switch (num3){
                            case 1:
                                while(rounds <= 3){
                                cout << "  ! JOGADOR 1 ! \n"
                                        "_||_  Digite 1 para pedra, 2 para papel ou 3 para tesoura _||_" << endl;
                                    cin >> j1;
                                //Vez da maquina
                                srand(time(NULL));
                                j2 = (rand() % 2) + 1;
                                cout << "Escolha do oponente :" << j2 << endl;

                                //Checagem de vitória e aumaneto de pontos

                                if(j1 == j2) {
                                    rounds++;
                                }
                                else if((j2 == 1 && j1 == 2) || (j2 == 2 && j1 == 3) || (j2 == 3 && j1 == 1)) {
                                    b3++;
                                    rounds++;
                                    if(b3 == 2 && rounds <= 2){
                                        cout << "Venceu antes do fim! Que sorte!" << endl;
                                        break;
                                    }
                                }
                                else if((j1 == 1 && j2 == 2) || (j1 == 2 && j2 == 3) || (j1 == 3 && j2 == 1)) {
                                    rounds++;
                                } else
                                    cout << "Valor nao suportado detectado / Insira valores correspondentes \n" << endl;
                                }

                                cout << "Resultado: \n" << endl;
                                    if(b3 >= 2){
                                        cout << "Vitoria! \n" << endl;
                                    }
                                    else
                                        cout << "Derrota... \n" << endl;

                                    b3 = 0; rounds = 0;
                                break;

                            case 2:
                                while(rounds <= 5){
                                cout << "  ! JOGADOR 1 ! \n"
                                        "_||_  Digite 1 para pedra, 2 para papel ou 3 para tesoura _||_" << endl;
                                    cin >> j1;
                                //Vez da maquina
                                srand(time(NULL));
                                j2 = (rand() % 2) + 1;
                                cout << "Escolha do oponente :" << j2 << endl;

                                //Checagem de vitória e aumaneto de pontos

                                if(j1 == j2) {
                                    rounds++;
                                }
                                else if((j2 == 1 && j1 == 2) || (j2 == 2 && j1 == 3) || (j2 == 3 && j1 == 1)) {
                                    b5++;
                                    rounds++;
                                    if(b5 == 3 && rounds <= 4){
                                        cout << "Venceu antes do fim! Que sorte!" << endl;
                                        break;
                                    }
                                }
                                else if((j1 == 1 && j2 == 2) || (j1 == 2 && j2 == 3) || (j1 == 3 && j2 == 1)) {
                                    rounds++;
                                } else
                                    cout << "Valor nao suportado detectado / Insira valores correspondentes \n" << endl;
                                }

                                cout << "Resultado: \n" << endl;
                                    if(b5 >= 3){
                                        cout << "Vitoria! \n" << endl;
                                    }
                                    else
                                        cout << "Derrota... \n" << endl;

                                    b5 = 0; rounds = 0;
                                break;
                            case 3:
                                while(rounds <= 7){
                                cout << "  ! JOGADOR 1 ! \n"
                                        "_||_  Digite 1 para pedra, 2 para papel ou 3 para tesoura _||_" << endl;
                                    cin >> j1;
                                //Vez da maquina
                                srand(time(NULL));
                                j2 = (rand() % 2) + 1;
                                cout << "Escolha do oponente :" << j2 << endl;

                                //Checagem de vitória e aumaneto de pontos

                                if(j1 == j2) {
                                    rounds++;
                                }
                                else if((j2 == 1 && j1 == 2) || (j2 == 2 && j1 == 3) || (j2 == 3 && j1 == 1)) {
                                    b7++;
                                    rounds++;
                                    if(b7 == 4 && rounds <= 6){
                                        cout << "Venceu antes do fim! Que sorte!" << endl;
                                        break;
                                    }
                                }
                                else if((j1 == 1 && j2 == 2) || (j1 == 2 && j2 == 3) || (j1 == 3 && j2 == 1)) {
                                    rounds++;
                                } else
                                    cout << "Valor nao suportado detectado / Insira valores correspondentes \n" << endl;
                                }

                                cout << "Resultado: \n" << endl;
                                    if(b7 >= 4){
                                        cout << "Vitoria! \n" << endl;
                                    }
                                    else
                                        cout << "Derrota... \n" << endl;

                                    b7 = 0; rounds = 0;
                                break;
                            case 4:
                                cout << "\t Lembre-se: pressione 's' na escolha de pedra, papel ou tesoura para sair \n"
                                        "do modo infinito (voce recebe uma avaliacao no final)" << endl;
                                while(1) {
                        cout << "  ! JOGADOR 1 ! \n"
                                "_||_  Digite 1 para pedra, 2 para papel ou 3 para tesoura _||_" << endl;
                                cin >> j1;
                        cout << "  ! IA ! \n" << endl;
                                srand(time(NULL));
                                j2 = (rand() % 2) + 1;
                                cout << "Escolha do oponente :" << j2 << endl;
                                //Definição do vencedor
                                if(j1 == j2) {
                                    cout << "DEU EMPATE! \n" << endl;
                                    j1 = j2 = 0;
                                    rounds++;
                                }
                                else if((j2 == 1 && j1 == 2) || (j2 == 2 && j1 == 3) || (j2 == 3 && j1 == 1)) {
                                    cout << "JOGADOR 1 VENCEU! \n" << endl;
                                    j1 = j2 = 0;
                                    rounds++;
                                    vic++;
                                }
                                else if((j1 == 1 && j2 == 2) || (j1 == 2 && j2 == 3) || (j1 == 3 && j2 == 1)) {
                                    cout << "JOGADOR 2 VENCEU! \n" << endl;
                                    j1 = j2 = 0;
                                    rounds++;
                                }
                                else
                                    cout << "Valor nao suportado detectado / Insira valores correspondentes \n" << endl;
                                    j1 = j2 = 0;
                    }

                            default:
                                cout << "Digite outro numero" << endl;
                                break;
                        }
                    }
                    else if(num2 == 2) /* Multiplayer */ {
                        while(1) {
                        cout << "  ! JOGADOR 1 ! \n"
                                "_||_  Digite 1 para pedra, 2 para papel ou 3 para tesoura _||_" << endl;
                                cin >> j1;
                                if(j1 == 's' || j1 == 'S'){
                                    cout << "Sua avaliacao: \n"
                                            "Rounds jogados: " << rounds <<
                                            "\nRounds vencidos: " << vic <<
                                            "\nNota: " << (vic/rounds) * 10 << "/10" << endl;
                                            break;
                                        }

                        cout << "  ! JOGADOR 2 ! \n"
                                "_||_  Digite 1 para pedra, 2 para papel ou 3 para tesoura _||_" << endl;
                                cin >> j2;
                                //Definição do vencedor
                                if(j1 == j2) {
                                    cout << "DEU EMPATE! \n" << endl;
                                    j1 = j2 = 0;
                                }
                                else if((j2 == 1 && j1 == 2) || (j2 == 2 && j1 == 3) || (j2 == 3 && j1 == 1)) {
                                    cout << "JOGADOR 1 VENCEU! \n" << endl;
                                    j1 = j2 = 0;
                                }
                                else if((j1 == 1 && j2 == 2) || (j1 == 2 && j2 == 3) || (j1 == 3 && j2 == 1)) {
                                    cout << "JOGADOR 2 VENCEU! \n" << endl;
                                    j1 = j2 = 0;
                                } else
                                    cout << "Valor nao suportado detectado / Insira valores correspondentes \n" << endl;
                                    j1 = j2 = 0;
                    }
                    }
            } }
                else if(num == 2) { return 0;}
            }


    return 0;
}
