#include <iostream>
#include <iomanip>

 using namespace std;

 int main(){

    float n1,n2,n3,n4, media;

    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }   
    else{
        cout << "Aluno em exame." << endl;
        float n5;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        media = (media + n5)/2;
        if(media >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }

    return 0;
 }