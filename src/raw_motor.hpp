#pragma once

#include <inttypes.h>

namespace NNCT {
namespace interfaces {
    
class RawMotor {
    public:
    virtual void cw (uint8_t duty) = 0;
    virtual void ccw(uint8_t duty) = 0;
    
    void run(int16_t duty) {
        if(duty > 0) this->cw(duty);
        else          this->ccw(duty);
    }
};

}
}
