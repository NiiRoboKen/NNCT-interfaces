#pragma once

namespace NNCT {
namespace interfaces {

class SpeedEncoder {
    public:
    virtual float getRPM() = 0;
};

}
}
