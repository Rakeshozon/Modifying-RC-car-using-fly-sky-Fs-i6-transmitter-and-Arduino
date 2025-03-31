#include <Servo.h>

#define MOTOR_A_PWM 6   // Speed control for Motor A (left/right)
#define MOTOR_A_IN1 4   // Motor A forward
#define MOTOR_A_IN2 5   // Motor A backward

#define MOTOR_B_PWM 11  // Speed control for Motor B (forward/backward)
#define MOTOR_B_IN3 7   // Motor B forward
#define MOTOR_B_IN4 8   // Motor B backward

#define CH1_PIN 9  // FS-i6 CH1 (Steering)
#define CH2_PIN 10 // FS-i6 CH2 (Throttle)

// Receiver signal reading
int readChannel(int pin) {
    int pulseWidth = pulseIn(pin, HIGH, 25000);
    return pulseWidth == 0 ? 1500 : pulseWidth;  // Default to 1500 if no signal
}

void setup() {
    pinMode(MOTOR_A_PWM, OUTPUT);
    pinMode(MOTOR_A_IN1, OUTPUT);
    pinMode(MOTOR_A_IN2, OUTPUT);
    
    pinMode(MOTOR_B_PWM, OUTPUT);
    pinMode(MOTOR_B_IN3, OUTPUT);
    pinMode(MOTOR_B_IN4, OUTPUT);

    pinMode(CH1_PIN, INPUT);
    pinMode(CH2_PIN, INPUT);

    Serial.begin(9600);
}

void loop() {
    int throttle = readChannel(CH2_PIN);  // Speed control
    int steering = readChannel(CH1_PIN);  // Direction control

    // Convert PWM signals to motor values
    int speed = map(throttle, 1000, 2000, -255, 255);
    int turn = map(steering, 1000, 2000, -255, 255);

    // Serial.print("Speed: "); Serial.print(speed);
    // Serial.print("  Turn: "); Serial.println(turn); 

    // Motor A (Steering)
    if (turn > 50) { 
        digitalWrite(MOTOR_A_IN1, HIGH);
        digitalWrite(MOTOR_A_IN2, LOW);
        analogWrite(MOTOR_A_PWM, abs(turn));
    } else if (turn < -50) {
        digitalWrite(MOTOR_A_IN1, LOW);
        digitalWrite(MOTOR_A_IN2, HIGH);
        analogWrite(MOTOR_A_PWM, abs(turn));
    } else {
        digitalWrite(MOTOR_A_IN1, LOW);
        digitalWrite(MOTOR_A_IN2, LOW);
        analogWrite(MOTOR_A_PWM, 0);
    }

    // Motor B (Throttle)
    if (speed > 50) { 
        digitalWrite(MOTOR_B_IN3, HIGH);
        digitalWrite(MOTOR_B_IN4, LOW);
        analogWrite(MOTOR_B_PWM, abs(speed));
    } else if (speed < -50) {
        digitalWrite(MOTOR_B_IN3, LOW);
        digitalWrite(MOTOR_B_IN4, HIGH);
        analogWrite(MOTOR_B_PWM, abs(speed));
    } else {
        digitalWrite(MOTOR_B_IN3, LOW);
        digitalWrite(MOTOR_B_IN4, LOW);
        analogWrite(MOTOR_B_PWM, 0);
    }

    delay(20);
}
