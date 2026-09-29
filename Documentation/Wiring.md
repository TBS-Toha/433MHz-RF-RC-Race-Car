# Wiring

## Remote Controller

The remote controller contains:

- Arduino Nano
- Joystick module
- 433MHz RF transmitter
- Battery

### Joystick

The joystick X-axis output is connected to:

```text

Arduino Nano A0

The joystick Y-axis output is connected to:

Arduino Nano A1



RC Car

The RC car contains:

Controller
433MHz RF receiver
L298 motor driver
Two N200 500 RPM motors
3S battery
Custom chassis
L298 Connections

Left motor:

ENA -> D5
IN1 -> D2
IN2 -> D3

Right motor:

ENB -> D6
IN3 -> D4
IN4 -> D7
Motor Connections

Left motor:

L298 OUT1
L298 OUT2

Right motor:

L298 OUT3
L298 OUT4

Motor direction can be reversed by changing the motor wire polarity or
changing the direction logic in software.


Power

The motor supply and logic supply must follow the voltage requirements
of the specific hardware.

The 3S battery must not be connected directly to electronics that are
not rated for the battery voltage.

Use appropriate voltage regulation for the controller and RF
electronics.


---

# Step 13 — Working principle

Create:

```text
Documentation/Working_Principle.md

Use:

# Working Principle

The RC race car operates using wireless communication between a remote
controller and the vehicle.

## Step 1: Joystick Input

The operator moves the joystick.

The Arduino Nano reads two analog values:

```text
X-axis -> A0
Y-axis -> A1

The Arduino uses threshold values to determine the joystick direction.

Step 2: Command Generation

The remote controller generates commands such as:

FORWARD
BACKWARD
LEFT
RIGHT
FWD_L
FWD_R
BWD_L
BWD_R
STOP
Step 3: RF Transmission

The command is transmitted using a 433MHz RF transmitter.

The project uses the RadioHead RH_ASK library.

Step 4: RF Reception

The 433MHz receiver installed in the RC car receives the transmitted
command.

Step 5: Command Processing

The car controller compares the received command with the supported
movement commands.

Step 6: Motor Control

The controller sends signals to the L298 motor driver.

The L298 controls the two N200 motors.

Step 7: Vehicle Movement

The two motors are controlled independently.

This allows differential steering.

The vehicle can move:

Forward
Backward
Left
Right
Forward-left
Forward-right
Backward-left
Backward-right
Stop