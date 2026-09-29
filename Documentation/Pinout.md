# Pinout

## Remote Controller

| Arduino Nano Pin | Component | Function |
|---|---|---|
| A0 | Joystick X | X-axis input |
| A1 | Joystick Y | Y-axis input |
| RF DATA | 433MHz TX | RF data transmission |
| GND | Joystick | Ground |
| GND | RF TX | Ground |
| VCC | RF TX | Power |

The exact RF transmitter data pin depends on the wiring used in the
physical remote controller.

---

# RC Car

## Arduino / Controller to L298 Motor Driver

| Arduino Pin | L298 Pin | Function |
|---|---|---|
| D5 | ENA | Left motor PWM |
| D2 | IN1 | Left motor direction |
| D3 | IN2 | Left motor direction |
| D6 | ENB | Right motor PWM |
| D4 | IN3 | Right motor direction |
| D7 | IN4 | Right motor direction |

## Motor Driver

| L298 Connection | Function |
|---|---|
| ENA | Left motor speed |
| IN1 | Left motor direction |
| IN2 | Left motor direction |
| OUT1 | Left motor |
| OUT2 | Left motor |
| ENB | Right motor speed |
| IN3 | Right motor direction |
| IN4 | Right motor direction |
| OUT3 | Right motor |
| OUT4 | Right motor |

## RF Receiver

The RF receiver data output is connected to the RF library's configured
receive input.

The exact RF receiver pin should match the physical wiring and
RH_ASK configuration used in the project.