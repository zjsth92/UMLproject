/*
 * EtatRobotEnRoute.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: sth
 */
#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Etat/EtatRobotEnRoute.h"


EtatRobotEnRoute::EtatRobotEnRoute() {}
EtatRobotEnRoute::~EtatRobotEnRoute() {}

EtatRobot* EtatRobotEnRoute::figer() {
	return EtatRobotFige::instance();
}

void EtatRobotEnRoute::afficher() {
	cout<<"this is etat robot en route"<<endl;
}