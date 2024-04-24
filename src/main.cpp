#include <Arduino.h>

#define b8 2
#define b4 3
#define b2 4
#define b1 5

#define A 7
#define B 8
#define C 9
#define D 10
#define E 11
#define F 12
#define G 13

int b1_state = 0;
int b2_state = 0;
int b4_state = 0;
int b8_state = 0;
int num = 0;

void resetSegments();
void write0();
void write1();
void write2();
void write3();
void write4();
void write5();
void write6();
void write7();
void write8();
void write9();
void writeA();
void writeB();
void writeC();
void writeD();
void writeE();
void writeF();

void setup() {
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b4, INPUT_PULLUP);
  pinMode(b8, INPUT_PULLUP);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(b1) == 0 && b1_state != 0) b1_state = 0;
  else if (digitalRead(b1) == 0) b1_state = 1;
  if (digitalRead(b2) == 0 && b2_state != 0) b2_state = 0;
  else if (digitalRead(b2) == 0) b2_state = 2;
  if (digitalRead(b4) == 0 && b4_state != 0) b4_state = 0;
  else if (digitalRead(b4) == 0) b4_state = 4;
  if (digitalRead(b8) == 0 && b8_state != 0) b8_state = 0;
  else if (digitalRead(b8) == 0) b8_state = 8;
  num = 0;
  num = b1_state + b2_state + b4_state + b8_state;
  Serial.println(" ");
  Serial.print("b1_state = ");
  Serial.println(b1_state);
  Serial.print("b2_state = ");
  Serial.println(b2_state);
  Serial.print("b4_state = ");
  Serial.println(b4_state);
  Serial.print("b8_state = ");
  Serial.println(b8_state);
  Serial.print("num = ");
  Serial.println(num);
  switch (num)
  {
  case 0:
    write0();
    break;
  case 1:
    write1();
    break;
  case 2:
    write2();
    break;
  case 3:
    write3();
    break;
  case 4:
    write4();
    break;
  case 5:
    write5();
    break;
  case 6:
    write6();
    break;
  case 7:
    write7();
    break;
  case 8:
    write8();
    break;
  case 9:
    write9();
    break;
  case 10:
    writeA();
    break;
  case 11:
    writeB();
    break;
  case 12:
    writeC();
    break;
  case 13:
    writeD();
    break;
  case 14:
    writeE();
    break;
  case 15:
    writeF();
    break;
  default:
    resetSegments();
    break;
  }
  delay(1000);
}

void resetSegments() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}

void write0() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}
void write1() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void write2() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
void write3() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
void write4() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void write5() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void write6() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void write7() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void write8() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void write9() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void writeA() {
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void writeB() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void writeC() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}
void writeD() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
}
void writeE() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void writeF() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}