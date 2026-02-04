#pragma once

#include "motor.hpp"

namespace NNCT {
namespace interfaces {

class ReadableMotor : public Motor {
    public:
    virtual float getRPM() = 0;
};

}
}
