#pragma once

namespace NNCT {
namespace interfaces {

class RotaryEncoder {
    public:
    virtual float getRPM() = 0;
    virtual float getAngle() = 0;
};

}
}
