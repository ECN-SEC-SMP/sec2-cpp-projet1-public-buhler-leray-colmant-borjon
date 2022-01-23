#include <iostream>
#pragma once
using namespace std;
#include "Parcelle.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include "ZN.hpp"
#include "ZA.hpp"
#include "ZAU.hpp"
#include "ZU.hpp"
#include <vector>


class Carte {
    private:
        float surfaceTotale;
        std::vector<Parcelle> parcelles;

    public:
    Carte();
    void lectureFichier();
    float getsurfaceTotale();

};


Carte::Carte(){
  this->surfaceTotale = 0;
}

void Carte::lectureFichier(){
  
  ifstream file ("Parcelles_short.txt");
  string line;
  size_t pos=0;
  string token;
  string delimiter = " ";
  vector<string> zone;

  // 21:44, je viens de réaliser qu'il faut créer un vecteur de points, je n'aurais pas le temps de 
  // finir ahah

  if (file.is_open()){
      // On lit les lignes une à une
    while(getline(file,line)) {    
      while ((pos = line.find(delimiter)) != string::npos){
        token = line.substr(0, pos);
        switch (line[1]) {
        case 'U':
          cout << "OK ZU" << endl;
        //   ZU zu = ZU(zone[0], zone[1], zone[2], zone[3], zone[4]);
        //   this->surfaceTotale += zu.getSurface();
        //   this->parcelles.push_back(zu);
          
          break;
        case 'A':
          if (line[2]=='U'){
            cout << "OK ZAU " << zone[1] << endl;
            // ZAU zau = ZAU(zone[0], zone[1], zone[2], zone[3]);
            // this->surfaceTotale += zau.getSurface();
            // this->parcelles.push_back(zau);
          }
          else{
            cout << "OK ZA" << endl;
            // ZA za = ZA(zone[0], zone[1], zone[2], zone[3]);
            // this->surfaceTotale += za.getSurface();
            // this->parcelles.push_back(za);
          }
          break;
        case 'N':
            // ZN zn = ZN(zone[0], zone[1], zone[2]);
            // this->surfaceTotale += zn.getSurface();
            // this->parcelles.push_back(zn);
          cout << "OK ZN" << endl;
          break;
        
        default: 
            //cout << "coordonnées" << endl;
        break;
        }
        token = line.substr (0,pos);
        zone.push_back(token);
        line.erase(0, pos + delimiter.length());
        //cout << pos << endl;
        /*for (int j=0;j<zone.size()+1;j++){
          cout <<zone[j]<<' ' << endl;
        }*/
      }
      
      /*switch (zone[0]) {
        case "ZU":
          cout << "ok1" << endl;
          break;
        case "ZAU":
          cout << "ok2" << endl;
          break;
        case "ZA":
          cout << "ok3" << endl;
          break;
        case "ZN":
          cout << "ok4" << endl;
          break;
      }*/

      
    }
    // for (int j=0;j<zone.size();j++){
    //       cout <<zone[j]<<' ' << endl;
    //     }

      // Identifiez le type PARCELLE 
      //-> Itération en fct° du type
      // fgets ou getline()
    file.close();
  }
  else{
    printf("Impossible d'ouvrir le fichier test.txt");
  }

}

float Carte::getsurfaceTotale(){
    return this->surfaceTotale;
  }