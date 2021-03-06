#pragma once
#include "switchDevice.h"



class Thyristor :
    public switchDevice
{
public:
    Thyristor(double Value, int Node1, int Node2,Circuit& circuit);
    void stamp(Circuit& circuit) override;
    void stampRightHand(Circuit& circuit) override;
    void idealStamp(Circuit& circuit) override;
    void calculateState() override;
    std::string classQuery() override {return "TH";}
    std::string nodesQuery() override;
    int ID;
    double getCurrent(Circuit& circuit) override;
private:
    bool *gate;
};

