#pragma once

#include <inttypes.h>

namespace NNCT {
namespace interfaces {
    
class Motor {
    public:
    virtual void cwDuty (uint8_t speed) = 0;
    virtual void ccwDuty(uint8_t speed) = 0;
    
    void runDuty(int16_t speed) {
        if(speed > 0) this->cwDuty(speed);
        else          this->ccwDuty(speed);
    }
};

}
}
