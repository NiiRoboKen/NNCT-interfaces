# Interface design

## Diagram

```mermaid
classDiagram

class RawMotor{
    <<Interface>>
    + cw(duty)
    + ccw(duty)
    + run(duty)
}

class SpeedControllableMotor {
    <<Interface>>
    + setRPM()
}

class Servo {
    <<Interface>>
    + setAngle(angle)
}

class SpeedEncoder {
    <<Interface>>
    + getRPM()
}

class AngleEncoder {
    <<Interface>>
    + getAngle()
}

class PIDControllable {
    # kp
    # ki
    # kd
    # pid(error)
}

class CytronRawMotor {
    <<Example>>
    + cw(duty)
    + ccw(duty)
    + run(duty)
}
CytronRawMotor --|> RawMotor

class PIDMotor {
    <<Examlple>>
    - CytronRawMotor motor
    - AMT-102 encoder
    - kp
    - ki
    - kd
    + setRPM()
    - pid(error)
}
PIDMotor --|> SpeedControllableMotor
PIDMotor --|> PIDControllable
PIDMotor --* CytronRawMotor
PIDMotor --* AMT-102

class PIDServo {
    <<Example>>
    - CytronRawMotor motor
    - AMT-102 encoder
    - kp
    - ki
    - kd
    + setAngle()
    - pid(erro)
}
PIDServo --|> Servo
PIDServo --|> PIDControllable
PIDServo --* CytronRawMotor
PIDServo --* AMT-102

class AMT-102 {
    <<Example>>
    + getRPM()
    + getAngle()
}
AMT-102 --|> SpeedEncoder
AMT-102 --|> AngleEncoder
```

## Interface explain
