#include "../../Header/Robot/Objet.h"

Objet::Objet(int p) : poids(p) {
}

int Objet::getPoids() {
    return Objet::poids;
}

void Objet::setPoids(int p) {
    poids = p;
}