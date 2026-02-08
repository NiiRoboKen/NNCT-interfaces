#pragma once

namespace NNCT {
namespace interfaces {

class SpeedControllableMotor {
    public:
    virtual void setRPM(float rpm) = 0; 
};

}
}
