#pragma once

#include <inttypes.h>

namespace NNCT {
namespace interfaces {
    
class Motor {
    public:
    virtual void cwDuty (uint8_t duty) = 0;
    virtual void ccwDuty(uint8_t duty) = 0;
    
    void runDuty(int16_t duty) {
        if(duty > 0) this->cwDuty(duty);
        else          this->ccwDuty(duty);
    }
};

}
}
