/* 7Segment 1 Digit LED Module (5161AS) [D011] : http://rdiot.tistory.com/298 [RDIoT Demo] */

#define ledA 8
#define ledB 9
#define ledC 2
#define ledD 3
#define ledE 4
#define ledF 6
#define ledG 5
 
void setup()
{
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  Serial.println("Starting\n");
  LoopDisplay();    //Call LoopDisplay Function
}
 
void clr()
{
  //Clears the LED
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}
 
 
void char_A()
{
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void char_B()
{
  //Displays B
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void char_C()
{
  //Displays C
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
}
 
void char_D()
{
  //Displays D
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void char_E()
{
  //Displays E
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
}
 
void char_F()
{
  //Displays F
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
}
 
 
void one()
{
  //Displays 1
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void two()
{
  //Displays 2
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
}
 
void three()
{
  //Displays 3
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void four()
{
  //Displays 4
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void five()
{
  //Displays 5
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
}
 
void six()
{
  //Displays 6
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
}
 
void seven()
{
  //Displays 7
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void eight()
{
  //Displays 8
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void nine()
{
  //Displays 9
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void zero()
{
  //Displays 0
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}
 
void LoopDisplay()
{
  char_A();
  delay(1000);
  char_B();
  delay(1000);
  char_C();
  delay(1000);
  char_D();
  delay(1000);
  char_E();
  delay(1000);
  char_F();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
  zero();
  delay(1000);
}
