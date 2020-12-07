#include <iostream>
#include <ctime> 
#include <string> 
#include <cstdlib> 
using namespace std;

int main() {
    
    int vidas = 6; 
    char letra; 
    bool letracorrecta = false; 
    char letrasant[7]; 
    letrasant[0] = '\0'; 
    string lista_palabras[10] = {"geologia","satelite","cebolla","pasta","pizzeria","helado","espacio","cachorro","dentista","langosta"}; 
    string palabra; 

    cout << "EL AHORCADO" << endl;
    cout << "CREADO POR RICARDO A." << endl;
    cout << "_______________  " << endl;
    cout << "|      }         " << endl;
    cout << "|      O         " << endl;
    cout << "|     /|\\       " << endl;
    cout << "|     / \\       " << endl;
    cout << "|______________  " << endl;
    system("pause"); 
    system("cls"); 
    
    for (int i = 0; i < 6; i++) 
    {
        letrasant[i] = '-'; 
    }
    letrasant[6] = '\0'; 
    srand(time(NULL)); 
    int rng = 0 + rand()%(10);
    palabra = lista_palabras[rng]; 
    string palabra_m(palabra.length(), '_'); 
  
    while (vidas >= 0) 
    {
        letracorrecta = false; 
        cout << "La palabra que debes adivinar es:" << endl << endl;
        cout << palabra_m << endl << endl; 
        cout << "La palabra tiene " << palabra_m.length() << " letras" << endl;
        cout << "Tienes " << vidas << " intentos restantes" << endl;
        if (letrasant[0] == '\0')
        {
            cout << endl; /
        }
        else 
        {
            cout << "Letras jugadas: " << letrasant << endl; 
        }
        cout << "Adivina una letra de la palabra: ";
        cin >> letra; 
        system("cls"); 
        
        for (int i = 0; i < palabra_m.length(); i++)
        {
            if (palabra[i] == letra)
            {
                palabra_m[i] = letra;
                letracorrecta = true;
            }
        }
        
        if (palabra == palabra_m)
        {
            cout << "Felicidades! Adivinaste la palabra: " << palabra_m << endl;
            break;
        }
        
        if (letracorrecta == false) 
        {
            vidas--;
            cout << "Oh oh... " << letra << " no forma parte de la palabra" << endl;
        } 
        else 
        {
            cout << "Bingo! " << letra << " es una de las letras!" << endl; /
        }
        /
        switch (vidas) 
        {
            case 6:
            {
                cout << "_______________  " << endl;
                cout << "|      }         " << endl;
                cout << "|                " << endl;
                cout << "|                " << endl; 
                cout << "|                " << endl;
                cout << "|______________  " << endl;
                cout << endl;
                break;
            }
            case 5:
            {
                cout << "_______________  " << endl;
                cout << "|      }         " << endl;
                cout << "|      O         " << endl; 
                cout << "|                " << endl;
                cout << "|                " << endl;
                cout << "|______________  " << endl;
                cout << endl;
                if (letracorrecta == false) 
                {
                    letrasant[0] = letra; 
                }
                break;
            }
            case 4: 
            {
                cout << "_______________  " << endl;
                cout << "|      }         " << endl;
                cout << "|      O         " << endl; 
                cout << "|      |         " << endl;
                cout << "|                " << endl;
                cout << "|______________  " << endl;
                cout << endl;
                if (letracorrecta == false) 
                {
                    letrasant[1] = letra; 
                }
                break;
            }
            case 3: 
            {
                cout << "_______________  " << endl;
                cout << "|      }         " << endl;
                cout << "|      O         " << endl; 
                cout << "|     /|         " << endl;
                cout << "|                " << endl;
                cout << "|______________  " << endl;
                cout << endl;
                if (letracorrecta == false) 
                {
                    letrasant[2] = letra; 
                }
                break;
            }
            case 2: 
            {
                cout << "_______________  " << endl;
                cout << "|      }         " << endl;
                cout << "|      O         " << endl; 
                cout << "|     /|\\       " << endl;
                cout << "|                " << endl;
                cout << "|______________  " << endl;
                cout << endl;
                if (letracorrecta == false) 
                {
                    letrasant[3] = letra; 
                }
                break;
            }
            case 1: 
            {
                cout << "_______________  " << endl;
                cout << "|      }         " << endl;
                cout << "|      O         " << endl; 
                cout << "|     /|\\       " << endl;
                cout << "|     /          " << endl;
                cout << "|______________  " << endl;
                cout << endl;
                if (letracorrecta == false) 
                {
                    letrasant[4] = letra; 
                }
                break;
            }
            case 0: 
            {
                cout << "Has sido ahorcado :(" << endl;
                cout << "La palabra que te mato fue: " << palabra << endl; 
                cout << "_______________  " << endl;
                cout << "|      }         " << endl;
                cout << "|      O         " << endl;
                cout << "|     /|\\       " << endl;
                cout << "|     / \\       " << endl;
                cout << "|______________  " << endl;
                cout << endl;
                vidas = -1; 
                break;
            }
            default: 
            cout << "Error 404: Si ves este mensaje notifica al creador..." << endl;
        }
    }
    system("pause"); 
    return 0;
}