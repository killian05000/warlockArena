#include <iostream>
#include <string>
#include <random>
#include <stdlib.h>
#include "personnage.h"

using namespace std;



void action(Personnage &lanceur, Personnage &cible)
{
  string choix="";
  //system("color FC");
  cout << lanceur.getnom();
  //system("color 03");
  cout << ", voulez vous attaquer(a), vous soigner(s) ou utiliser peine capitale(p) ? ";

  while (choix!="a" && choix!="s" && choix!="p" && choix!="s " && choix!="os")
  {
    getline (cin,choix);
  }

  cout << endl;

  if (choix=="a")
  {
    cout << lanceur.getnom() << " attaque " << cible.getnom() << " et inflige " << lanceur.attaquer(cible) << " degats." << endl;
    cout << "Il reste " << cible.getvie() << " pdv a " << cible.getnom() << "." << endl << endl;
  }
  else if (choix=="s")
  {
    if (lanceur.getmana() == 0)
      {
        cout << "Vous etes a cours de mana ! votre tour de jeu est sauté :)" << endl << endl;
      }
    else
    {
      cout << lanceur.getnom() << " a utiliser " << lanceur.manacost() << " points de mana." << endl;
      cout << "Il reste " << lanceur.getmana() << " points de mana a " << lanceur.getnom() << "." << endl;
      cout << lanceur.getnom() << " se soigne de " << lanceur.soigner() << " pdv." << endl;
      cout << lanceur.getnom() << " a maintenant " << lanceur.getvie() << " pdv." << endl << endl;
    }
  }
  else if (choix=="s ")
  {
    cout << lanceur.getnom() << " utiliser la capacite secrete soin ultime et regagne " << lanceur.cheatcode_s() << " pdv." << endl;
    cout << lanceur.getnom() << " a maintenant " << lanceur.getvie() << " pdv." << endl << endl;
  }
  else if (choix=="os")
  {
    cout << lanceur.getnom() << " utilise la capacite secrete one-shot et inflige " << lanceur.cheatcode_os(cible) << " degats." << endl;
    cout << "Il reste " << cible.getvie() << " pdv a " << cible.getnom() << endl << endl;
  }
  else
  {
    cout << lanceur.getnom() << " utilise peine capitale sur " << cible.getnom() << " et inflige " << lanceur.peinecapitale(cible) << " degats." << endl;

    int temp = lanceur.pccost();
    if (temp < 0)
      cout << lanceur.getnom() << " est aussi affecte, et se soigne de " << -temp << " pdv." << endl;
    else
      cout << lanceur.getnom() << " est aussi blesse, et s'inflige " << temp << " degats." << endl;

    cout << "Il reste " << cible.getvie() << " points de vie a " << cible.getnom() << "." << endl;
    cout << "Il reste " << lanceur.getvie() << " points de vie a " << lanceur.getnom() << "." << endl << endl << endl;
  }
}

int main()
{
  //system("cls");
  //system("color 03");

  random_device generator;
  uniform_int_distribution<int> distribution(1,2);
  int ordre = distribution(generator);
  string nom1;
  string nom2;



  cout << "Saisissez le nom du joueur 1 : ";
  cin >> nom1;
  cout << "Saisissez le nom du joueur 2 : ";
  cin >> nom2;

  if (ordre==2)
  {
    string temp;
    temp=nom1;
    nom1=nom2;
    nom2=temp;
  }

  Personnage player1(nom1, 4000, 500);
  Personnage player2(nom2, 4000, 500);

  Personnage *p1 = &player1, *p2 = &player2; // p1 est un pointeur sur player1

  while ((player1.getvie() != 0) and (player2.getvie() != 0))
  {
    action(*p1, *p2);

    if(p1 == &player1)
    {
      p1 = &player2;
      p2 = &player1;
    }
    else
    {
      p1 = &player1;
      p2 = &player2;
    }
  }

  if (player1.getvie() > 0)
    cout << player1.getnom() << " a gagne !" << endl;
  else if (player2.getvie() > 0)
    cout << player2.getnom() << " a gagne !" << endl;
  else
    cout << "Pas de chance, vous avez tous les deux perdus !" << endl;

  return 0;
}
