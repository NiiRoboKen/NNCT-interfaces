#pragma once

namespace NNCT {
namespace interfaces {

class Servo {
    public:
    virtual void setAngle(float degree) = 0;
    
    protected:
    const float MAX_RANGE;
    const float MIN_RANGE;
};

}
}
