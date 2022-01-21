#include "Point2D.hpp"
#include <vector>
#pragma once
using namespace std;

template <typename T>
class Polygone;

template <typename T>
ostream& operator<<(ostream&, Polygone<T> const &);
/*
- sommets : Vector<Point2D<T>>
+ Polygone( )
+ Polygone(Vector<Point2D<T>> listeSommets)
+ Polygone(Polygone<T, S> poly)
+ getSommets( ) : Vector<Point2D<T>>
+ setSommets(Vector<Point2D<T>> listeSommets) : void + addPoint(Point2D<T>) : void
+ translate(T x, T y) : void
*/

template <typename T>
class Polygone {
    private:
        vector<Point2D<T>*> sommets;

    public:
        Polygone();
        Polygone(vector<Point2D<T>*> listeSommets);
        Polygone(Polygone <T> const &poly);

        vector<Point2D<T>*> getSommets() const;
        void setSommets(vector<Point2D<T>*> listeSommets);
        void addPoint(Point2D<T>* point);
        void translate(T x, T y);

        friend ostream& operator<< <T>(ostream &, Polygone<T> const &);
};


//Constructeurs
template <typename T>
Polygone<T>::Polygone(){
  this->sommets = vector<Point2D<T>*>();
}

template <typename T>
Polygone<T>::Polygone(vector<Point2D<T>*> listeSommets){
  this->sommets = listeSommets;
}

template <typename T>
Polygone<T>::Polygone(Polygone <T> const &poly){
  this->sommets = vector<Point2D<T>*>(poly.getSommets());
}


//Accesseurs
template <typename T>
vector<Point2D<T>*> Polygone<T>::getSommets() const{
  return this->sommets;
}

template <typename T>
void Polygone<T>::setSommets(vector<Point2D<T>*> listeSommets){
  this->sommets = listeSommets;
}


//Méthodes
template <typename T>
void Polygone<T>::addPoint(Point2D<T>* point){
  this->sommets.pushback(point);
}

template <typename T>
void Polygone<T>::translate(T x, T y){
  // for(typename std::vector<Point2D<T>*>::iterator it = std::begin(this->sommets); it != std::end(this->sommets); ++it) {
  //   *it.setX(*it.getX() + x);
  //     *it.setY(*it.getY() + y);
  // }
  for (auto& it : this->sommets)
    {
      it->setX(it->getX() + x);
      it->setY(it->getY() + y);
    }
}


template <typename T>
ostream& operator<<(ostream &o, Polygone<T> const &p){
  o << "Polygone : ";
  //vector<Point2D<T>*>::iterator it = begin(p.getSommets());
  for (auto it = begin(p.getSommets()); it != end(p.getSommets()); it++)
    {
      o << "[" << (*it)->getX() << ":" << (*it)->getY() << "] ";
    }

    return o;
}
