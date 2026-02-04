#pragma once

#include "motor.hpp"

namespace NNCT {
namespace interfaces {

class ReadableMotor : public Motor {
    public:
    virtual void cw (float rpm) = 0;
    virtual void ccw(float rpm) = 0;
    
    void run(float rpm) {
        if(rpm > 0) this->cw(rpm);
        else        this->ccw(-rpm);
    }
    
    virtual float getRPM() = 0;
};

}
}
