/*
 * EtatRobotEnRoute.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: sth
 */
#include "EtatRobotFige.h"
#include "EtatRobotEnRoute.h"


EtatRobotEnRoute::EtatRobotEnRoute() {}

EtatRobot* EtatRobotEnRoute::figer() {
	return EtatRobotFige::instance();
}
