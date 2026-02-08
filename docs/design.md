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

class RPMEncoder {
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
AMT-102 --|> RPMEncoder
AMT-102 --|> AngleEncoder
```

## Interface explain

### RawMotor

Duty比で制御するモータ。速度等は一切保証しない。

### SpeedControllableMotor

速度制御可能なモータ。

### Servo

角度制御可能なモータ(サーボモータ)。

### RPMEncoder

角速度(RPM)読取が可能なエンコーダ。

### AngleEncoder

角度読取が可能なエンコーダ。
