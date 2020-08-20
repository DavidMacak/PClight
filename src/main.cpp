/*
PC light - controls input and output via serial communication and C# app
For Arduino NANO
more at https://www.davak.cz
*/

#include <Arduino.h>

//serial communication 
byte incomingByte = 0;

//button pins
int inputPin0 = 14;  //A0
int inputPin1 = 15;  //A1
int inputPin2 = 16;  //A2
int inputPin3 = 17;  //A3
int inputPin4 = 18;  //A4
int inputPin5 = 19;  //A5
int inputPin6 = 20;  //A6
int inputPin7 = 21;  //A7

//output pins
int outputPin0 = 2;      //D2
int outputPin1 = 3;      //D3    PWM
int outputPin2 = 4;      //D4
int outputPin3 = 5;      //D5    PWM
int outputPin4 = 6;      //D6    PWM
int outputPin5 = 7;      //D7
int outputPin6 = 8;      //D8
int outputPin7 = 9;      //D9    PWM
int outputPin8 = 10;     //D10   PWM
int outputPin9 = 11;     //D11   PWM
int outputPin10 = 12;    //D12

void setup() {

//starting serial communication
Serial.begin(9600);
Serial.println("Setup...");

//setting input pins
pinMode(inputPin0,INPUT);
pinMode(inputPin1,INPUT);
pinMode(inputPin2,INPUT);
pinMode(inputPin3,INPUT);
pinMode(inputPin4,INPUT);
pinMode(inputPin5,INPUT);
pinMode(inputPin6,INPUT);
pinMode(inputPin7,INPUT);

//setting output pins
pinMode(outputPin0, OUTPUT);
pinMode(outputPin1, OUTPUT);
pinMode(outputPin2, OUTPUT);
pinMode(outputPin3, OUTPUT);
pinMode(outputPin4, OUTPUT);
pinMode(outputPin5, OUTPUT);
pinMode(outputPin6, OUTPUT);
pinMode(outputPin7, OUTPUT);
pinMode(outputPin8, OUTPUT);
pinMode(outputPin9, OUTPUT);
pinMode(outputPin10, OUTPUT);

//setting output pins to low value
digitalWrite(outputPin0,LOW);
digitalWrite(outputPin1,LOW);
digitalWrite(outputPin2,LOW);
digitalWrite(outputPin3,LOW);
digitalWrite(outputPin4,LOW);
digitalWrite(outputPin5,LOW);
digitalWrite(outputPin6,LOW);
digitalWrite(outputPin7,LOW);
digitalWrite(outputPin8,LOW);
digitalWrite(outputPin9,LOW);
digitalWrite(outputPin10,LOW);


Serial.println("Setup done");
}

void loop() {

    //TODO checks input pins state
    //
    //

    
    //TODO listen to serial communication
    //
    //
    if(Serial.available() > 0)
    {
        incomingByte = Serial.read();
        Serial.println(incomingByte);
        Serial.println(int(incomingByte));
/*
        if (incomingByte == 'A')
        {
            if(digitalRead(outputPin0) == LOW)
                digitalWrite(outputPin0, HIGH);
            else if(digitalRead(outputPin0) == HIGH)
                digitalWrite(outputPin0, LOW);
        }
*/
        switch (incomingByte)
        {
            case 'A':   //output 0
                if(digitalRead(outputPin0) == LOW)
                    digitalWrite(outputPin0, HIGH);
                else if(digitalRead(outputPin0) == HIGH)
                    digitalWrite(outputPin0, LOW);
                break;

            case 'B':   //output 1
                if(digitalRead(outputPin1) == LOW)
                    digitalWrite(outputPin1, HIGH);
                else if(digitalRead(outputPin1) == HIGH)
                    digitalWrite(outputPin1, LOW);
                break;

            case 'C':   //output 2
                if(digitalRead(outputPin2) == LOW)
                    digitalWrite(outputPin2, HIGH);
                else if(digitalRead(outputPin2) == HIGH)
                    digitalWrite(outputPin2, LOW);
                break;

            case 'D':   //output 3
                if(digitalRead(outputPin3) == LOW)
                    digitalWrite(outputPin3, HIGH);
                else if(digitalRead(outputPin3) == HIGH)
                    digitalWrite(outputPin3, LOW);
                break;  

            case 'E':   //output 4
                if(digitalRead(outputPin4) == LOW)
                    digitalWrite(outputPin4, HIGH);
                else if(digitalRead(outputPin4) == HIGH)
                    digitalWrite(outputPin4, LOW);
                break;

            case 'F':   //output 5
                if(digitalRead(outputPin5) == LOW)
                    digitalWrite(outputPin5, HIGH);
                else if(digitalRead(outputPin5) == HIGH)
                    digitalWrite(outputPin5, LOW);
                break;

            case 'G':   //output 6
                if(digitalRead(outputPin6) == LOW)
                    digitalWrite(outputPin6, HIGH);
                else if(digitalRead(outputPin6) == HIGH)
                    digitalWrite(outputPin6, LOW);
                break;

            case 'H':   //output 7
                if(digitalRead(outputPin7) == LOW)
                    digitalWrite(outputPin7, HIGH);
                else if(digitalRead(outputPin7) == HIGH)
                    digitalWrite(outputPin7, LOW);
                break;

            case 'I':   //output 8
                if(digitalRead(outputPin8) == LOW)
                    digitalWrite(outputPin8, HIGH);
                else if(digitalRead(outputPin8) == HIGH)
                    digitalWrite(outputPin8, LOW);
                break;   

            case 'J':   //output 9
                if(digitalRead(outputPin9) == LOW)
                    digitalWrite(outputPin9, HIGH);
                else if(digitalRead(outputPin9) == HIGH)
                    digitalWrite(outputPin9, LOW);
                break;

            case 'K':   //output 10
                if(digitalRead(outputPin10) == LOW)
                    digitalWrite(outputPin10, HIGH);
                else if(digitalRead(outputPin10) == HIGH)
                    digitalWrite(outputPin10, LOW);
                break;  

            case 'R':   //RESET
                digitalWrite(outputPin0,LOW);
                digitalWrite(outputPin1,LOW);
                digitalWrite(outputPin2,LOW);
                digitalWrite(outputPin3,LOW);
                digitalWrite(outputPin4,LOW);
                digitalWrite(outputPin5,LOW);
                digitalWrite(outputPin6,LOW);
                digitalWrite(outputPin7,LOW);
                digitalWrite(outputPin8,LOW);
                digitalWrite(outputPin9,LOW);
                digitalWrite(outputPin10,LOW);
                break;

        }



    }

    //TODO change output pins state
    //
    //
}