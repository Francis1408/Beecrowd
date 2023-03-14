#include <iostream>

using namespace std;

int main()
{

    int N;
    int real_password[6];
    int current_position1, current_position2;
    int number_selected = 0;
    int i = 1;

    cin >> N;

    while (N != 0) {

        cout << "Teste " << i << endl;

        int combinations[N][10];
        char sequences[N][6];

        for (int i = 0; i < N; i++) {
           // cout << "Sequencia " << i+1 << endl;
            for(int j = 0; j < 10; j++) {
                cin >> combinations[i][j];
               // cout << combinations[i][j];
            }
          // cout << endl <<"Digitação " << i+1 << endl;
            for(int k = 0; k < 6; k++){
                cin >> sequences[i][k];
            }

        }
        

        for(int i = 0; i < 6; i++) {
            current_position1 = ((int)sequences[0][i] - 65);
           //cout << "Posicao lockada: " << current_position1 << endl;

            for(int k = 1; k < N; k++) {
                current_position2 = ((int)sequences[k][i] - 65);
               //cout << "Posicao a ser comparada: " << current_position2 << endl;
                if(combinations[0][(current_position1)*2] == combinations[k][(current_position2)*2] 
                   || combinations[0][(current_position1)*2] == combinations[k][(current_position2)*2 + 1]){
                    continue;
                   }else{
                    //cout << "Numero " << combinations[0][(current_position1)*2] << "Não existe" << endl;
                    number_selected = 1;
                    break;
                   }                
            }
            if(number_selected){
                real_password[i] = combinations[0][(current_position1)*2 + 1];
                //cout << "Numero escrito" << combinations[0][(current_position1)*2 + 1] << "Não existe" << endl;
            }else{
                real_password[i] = combinations[0][(current_position1)*2];
            }

            number_selected = 0;
        }

        for (int i = 0; i < 6; i++) {
           cout << real_password[i] << " ";
        }

        cout << endl << endl;
        i++;
        cin >> N;
    }

}
