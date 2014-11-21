/*
 * EtatRobotEnRouteAVide.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: sth
 */
#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

EtatRobotEnRouteAVide* EtatRobotEnRouteAVide::ETAT_ROBOT_EN_ROUTE_AVIDE = NULL;

EtatRobotEnRouteAVide* EtatRobotEnRouteAVide::instance() {
	if (ETAT_ROBOT_EN_ROUTE_AVIDE == NULL)
		ETAT_ROBOT_EN_ROUTE_AVIDE = new EtatRobotEnRouteAVide();
	return ETAT_ROBOT_EN_ROUTE_AVIDE;
}
EtatRobot* EtatRobotEnRouteAVide::avancer() {
	return EtatRobotEnRouteAVide::instance();
}
EtatRobot* EtatRobotEnRouteAVide::tourner() {
	return EtatRobotEnRouteAVide::instance();
}
EtatRobot* EtatRobotEnRouteAVide::rencontrerPlot() {
	return EtatRobotEnRouteAVideFacePlot::instance();
}
void EtatRobotEnRouteAVide::afficher() {
	cout<<"this is etat robot en route a vide"<<endl;
}