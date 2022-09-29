#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Version pour un joueur V1
void joueur_1 () {
    string qua[3][3] = {
            {"", "", ""},
            {"", "", ""},
            {"", "", ""}
    };

    bool end = false;
    //Fonctionnement
    cout << "   1   |   2   |   3   "<< endl;
    cout << "-----------------------" << endl;
    cout << "   4   |   5   |   6   " << endl;
    cout << "-----------------------" << endl;
    cout << "   7   |   8   |   9   "<< endl;

    while (!end) {
        //Affichage plateau de jeu
        cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + ""<< endl;
        cout << "--------------------" << endl;
        cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
        cout << "--------------------" << endl;
        cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + ""<< endl;

        string coup;

        //Tour du joueur
        cout << "Au tour du joueur 1 :   " << endl;
        cin >> coup;
        int choix = stoi(coup);

        while (choix < 1 || choix > 9)  {
            cout << "Veuillez entrer un chiffre entre 1 et 9 compris" << endl;
            cin >> coup;
            choix = stoi(coup);
        }

        switch(choix) {
            case 1:
                qua[0][0] = "o";
                break;
            case 2:
                qua[0][1] = "o";
                break;
            case 3:
                qua[0][2] = "o";
                break;
            case 4:
                qua[1][0] = "o";
                break;
            case 5:
                qua[1][1] = "o";
                break;
            case 6:
                qua[1][2] = "o";
                break;
            case 7:
                qua[2][0] = "o";
                break;
            case 8:
                qua[2][1] = "o";
                break;
            case 9:
                qua[2][2] = "o";
                break;
        }

        //ligne
        for(int i = 0; i < 3; i++) {
            if (qua[i][0] == qua[i][1] && qua[i][0] == qua[i][2] && qua[i][0] != "") {
                end = true;
            }
        }

        //colonne
        for(int i = 0; i < 3; i++) {
            if (qua[0][i] == qua[1][i] && qua[0][i] == qua[2][i] && qua[0][i] != "") {
                end = true;
            }
        }

        //diag
        int i = 0;
        if (qua[0][0] == qua[1][1] && qua[0][0] == qua[2][2] && qua[0][0] != "") {
            end = true;
        }
        if (qua[0][2] == qua[1][1] && qua[0][2] == qua[2][0] && qua[0][2] != "") {
            end = true;
        }

        cout << choix << endl;
    }

    //Affichage final plateau de jeu
    cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + ""<< endl;
    cout << "--------------------" << endl;
    cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
    cout << "--------------------" << endl;
    cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + ""<< endl;

    cout << "Le Joueur 1 a gagné" << endl;
}

//Version pour 2 joueurs V2.1: code !propre et !simplifié
void joueur_2 () {
    string qua[3][3] = {
            {"", "", ""},
            {"", "", ""},
            {"", "", ""}
    };

    bool end = false;
    //Fonctionnement
    cout << "   1   |   2   |   3   "<< endl;
    cout << "-----------------------" << endl;
    cout << "   4   |   5   |   6   " << endl;
    cout << "-----------------------" << endl;
    cout << "   7   |   8   |   9   "<< endl;

    while (!end) {
        //Affichage plateau de jeu
        cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + ""<< endl;
        cout << "--------------------" << endl;
        cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
        cout << "--------------------" << endl;
        cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + ""<< endl;

        string coup1;

        //Tour du joueur
        cout << "Au tour du joueur 1 :   " << endl;
        cin >> coup1;
        int choix1 = stoi(coup1);

        while (choix1 < 1 || choix1 > 9)  {
            cout << "Veuillez entrer un chiffre entre 1 et 9 compris" << endl;
            cin >> coup1;
            choix1 = stoi(coup1);
        }

        switch(choix1) {
            case 1:
                qua[0][0] = "o";
                break;
            case 2:
                qua[0][1] = "o";
                break;
            case 3:
                qua[0][2] = "o";
                break;
            case 4:
                qua[1][0] = "o";
                break;
            case 5:
                qua[1][1] = "o";
                break;
            case 6:
                qua[1][2] = "o";
                break;
            case 7:
                qua[2][0] = "o";
                break;
            case 8:
                qua[2][1] = "o";
                break;
            case 9:
                qua[2][2] = "o";
                break;
        }

        //ligne
        for(int i = 0; i < 3; i++) {
            if (qua[i][0] == qua[i][1] && qua[i][0] == qua[i][2] && qua[i][0] != "") {
                end = true;
            }
        }

        //colonne
        for(int i = 0; i < 3; i++) {
            if (qua[0][i] == qua[1][i] && qua[0][i] == qua[2][i] && qua[0][i] != "") {
                end = true;
            }
        }

        //diag
        int i = 0;
        if (qua[0][0] == qua[1][1] && qua[0][0] == qua[2][2] && qua[0][0] != "") {
            end = true;
        }
        if (qua[0][2] == qua[1][1] && qua[0][2] == qua[2][0] && qua[0][2] != "") {
            end = true;
        }

        cout << choix1 << endl;

        //Joueur 2
        if (!end) {
            //Affichage plateau de jeu
            cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + "" << endl;
            cout << "--------------------" << endl;
            cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
            cout << "--------------------" << endl;
            cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + "" << endl;

            string coup2;

            //Tour du joueur 2
            cout << "Au tour du joueur 2 :   " << endl;
            cin >> coup2;
            int choix2 = stoi(coup2);

            while (choix2 < 1 || choix2 > 9) {
                cout << "Veuillez entrer un chiffre entre 1 et 9 compris" << endl;
                cin >> coup2;
                choix2 = stoi(coup2);
            }

            switch (choix2) {
                case 1:
                    qua[0][0] = "x";
                    break;
                case 2:
                    qua[0][1] = "x";
                    break;
                case 3:
                    qua[0][2] = "x";
                    break;
                case 4:
                    qua[1][0] = "x";
                    break;
                case 5:
                    qua[1][1] = "x";
                    break;
                case 6:
                    qua[1][2] = "x";
                    break;
                case 7:
                    qua[2][0] = "x";
                    break;
                case 8:
                    qua[2][1] = "x";
                    break;
                case 9:
                    qua[2][2] = "x";
                    break;
            }

            //ligne
            for (int i = 0; i < 3; i++) {
                if (qua[i][0] == qua[i][1] && qua[i][0] == qua[i][2] && qua[i][0] != "") {
                    end = true;
                }
            }

            //colonne
            for (int i = 0; i < 3; i++) {
                if (qua[0][i] == qua[1][i] && qua[0][i] == qua[2][i] && qua[0][i] != "") {
                    end = true;
                }
            }

            //diag
            if (qua[0][0] == qua[1][1] && qua[0][0] == qua[2][2] && qua[0][0] != "") {
                end = true;
            }
            if (qua[0][2] == qua[1][1] && qua[0][2] == qua[2][0] && qua[0][2] != "") {
                end = true;
            }

            cout << choix2 << endl;
            if (end)    {
                //Affichage final plateau de jeu
                cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + ""<< endl;
                cout << "--------------------" << endl;
                cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
                cout << "--------------------" << endl;
                cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + ""<< endl;
                cout << "Le joueur 2 a gagné." << endl;
            }
        }
        else    {
            //Affichage final plateau de jeu
            cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + ""<< endl;
            cout << "--------------------" << endl;
            cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
            cout << "--------------------" << endl;
            cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + ""<< endl;
            cout << "Le joueur 1 a gagné." << endl;
        }

    }



}

//Version pour 2 joueurs V2.2: changement de joueur effectué via un bool
void player2 () {
    string qua[3][3] = {
            {"", "", ""},
            {"", "", ""},
            {"", "", ""}
    };

    bool end = false;
    //Fonctionnement
    cout << "Pour choisir une case, il suffit de rentrer le chiffre de la case correspondant lors de votre tour." << endl;
    cout << "" << endl;
    cout << "   1   |   2   |   3   "<< endl;
    cout << "-----------------------" << endl;
    cout << "   4   |   5   |   6   " << endl;
    cout << "-----------------------" << endl;
    cout << "   7   |   8   |   9   "<< endl;

    //Initialisation nmbre de tour
    int tour = 0;

    //Changement de tour du joueur
    bool joueur1 = true;

    //1 Tour de jeu
    while (!end && tour <= 8) {
        //Tour
        tour ++;
        cout << "" << endl;
        cout << "Tour " << tour << endl;

        //Affichage plateau de jeu
        cout << "" << endl;
        cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + ""<< endl;
        cout << "--------------------" << endl;
        cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
        cout << "--------------------" << endl;
        cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + ""<< endl;
        cout << "" << endl;
        string coup;

        //Tour du joueur
        string symbole;

        if (joueur1)   {
            cout << "Au tour du joueur 1 :   " << endl;
            symbole = "o";
        }
        else    {
            cout << "Au tour du joueur 2 : " << endl;
            symbole = "x";
        }
        cin >> coup;
        int choix = stoi(coup);

        while (choix < 1 || choix > 9)  {
            cout << "Veuillez entrer un chiffre entre 1 et 9" << endl;
            cin >> coup;
            choix = stoi(coup);
        }

        switch(choix) {
            case 1:
                qua[0][0] = symbole;
                break;
            case 2:
                qua[0][1] = symbole;
                break;
            case 3:
                qua[0][2] = symbole;
                break;
            case 4:
                qua[1][0] = symbole;
                break;
            case 5:
                qua[1][1] = symbole;
                break;
            case 6:
                qua[1][2] = symbole;
                break;
            case 7:
                qua[2][0] = symbole;
                break;
            case 8:
                qua[2][1] = symbole;
                break;
            case 9:
                qua[2][2] = symbole;
                break;
        }

        //ligne
        for(int i = 0; i < 3; i++) {
            if (qua[i][0] == qua[i][1] && qua[i][0] == qua[i][2] && qua[i][0] != "") {
                end = true;
            }
        }

        //colonne
        for(int i = 0; i < 3; i++) {
            if (qua[0][i] == qua[1][i] && qua[0][i] == qua[2][i] && qua[0][i] != "") {
                end = true;
            }
        }

        //diag
        int i = 0;
        if (qua[0][0] == qua[1][1] && qua[0][0] == qua[2][2] && qua[0][0] != "") {
            end = true;
        }
        if (qua[0][2] == qua[1][1] && qua[0][2] == qua[2][0] && qua[0][2] != "") {
            end = true;
        }

        //Changement de joueur
        joueur1 = !joueur1;

    }

    //Affichage final plateau de jeu
    cout << "   " + qua[0][0] + "   |   " + qua[0][1] + "   |   " + qua[0][2] + ""<< endl;
    cout << "--------------------" << endl;
    cout << "   " + qua[1][0] + "   |   " + qua[1][1] + "   |   " + qua[1][2] + "" << endl;
    cout << "--------------------" << endl;
    cout << "   " + qua[2][0] + "   |   " + qua[2][1] + "   |   " + qua[2][2] + ""<< endl;
    cout << "" << endl;

    if (!joueur1)    {
        cout << "Le joueur 1 gagne" << endl;
    }
    else    {
        cout << "Le joueur 2 gagne" << endl;
    }
}


int main() {
    player2();
    return 0;
}
