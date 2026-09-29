# Components

## Remote Controller

### Arduino Nano
The Arduino Nano is used as the main controller of the remote system.

It reads the X and Y axis values from the joystick and converts the
joystick position into movement commands.

### Joystick Module
A single joystick module is used to control the RC car.

The X and Y analog outputs are connected to the Arduino Nano.

### 433MHz RF Transmitter
The 433MHz RF transmitter sends the movement commands wirelessly from
the remote controller to the RC car.

### Battery
An approximately 8.4V battery is used as the power source for the
remote controller.

The exact voltage supplied to the Arduino Nano and joystick must be
regulated according to the specifications of the actual hardware.

---

# RC Car

## Custom Chassis

The RC car uses a custom-built chassis designed to hold the motors,
motor driver, battery and electronic components.

## N200 DC Motors

Two N200 DC motors are used for propulsion.

Motor specification:

- Quantity: 2
- Speed: Approximately 500 RPM
- Drive system: Differential drive

## L298 Motor Driver

An L298 motor driver is used to control the two DC motors.

The driver controls:

- Motor direction
- Motor speed
- Left motor
- Right motor

## 433MHz RF Receiver

The 433MHz RF receiver receives movement commands from the remote
controller.

## 3S Battery

A 3S battery is used as the main power source for the RC car.

The actual battery voltage depends on the battery chemistry and
state of charge.

The battery must be connected according to the voltage ratings of
the motor driver and other components.