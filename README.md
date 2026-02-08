# NNCT-interfaces

新居浜高専ロボット研究部内で使用可能なC++用インターフェース郡。

`NNCT::interfaces`名前空間内で定義されています。

[-> more explain](docs/design.md)

## Interfaces

- RawMotor
- SpeedControllableMotor
- Servo
- RPMEncpder
- AngleEncoder

## APIs

### RawMotor

- cw(uint16_t duty)
- ccw(uint16_t duty)
- run(int32_t duty)

### SpeedControllableMotor

- setRPM(float rpm)

### Servo

- setAngle(float degree)

### RPMEncoder

- float getRPM()

### AngleEncoder

- float getAngle()
