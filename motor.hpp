#pragma once

#include <inttypes.h>

namespace NNCT {
namespace interfaces {
    
class Motor {
    public:
    virtual void cw (uint8_t speed) = 0;
    virtual void ccw(uint8_t speed) = 0;
    
    void run(int16_t speed) {
        if(speed > 0) this->cw(speed);
        else          this->ccw(speed);
    }
};

}
}
