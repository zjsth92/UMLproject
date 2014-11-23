#ifndef ETATROBOTENROUTEENCHARGE_H_
#define ETATROBOTENROUTEENCHARGE_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnCharge : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteEnCharge* thisEtat;
    
protected:
    EtatRobotEnRouteEnCharge(Robot* r);
    
public:
    ~EtatRobotEnRouteEnCharge();
    static EtatRobotEnRouteEnCharge* instance(Robot* r);
    void avancer(int x, int y);
    void tourner();
    int peser();
    void rencontrerPlot(const Plot& p);
    std::string getEtatToString();
};

#endif /* ETATROBOTENROUTEENCHARGE_H_ */
