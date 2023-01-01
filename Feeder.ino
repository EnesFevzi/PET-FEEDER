#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>
#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>
#include <virtuabotixRTC.h>
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(12,11);
const int dugme1=30; /* MOTORUN ÇALIŞMASI İÇİN BUTON*/
int trigPin=6 , echoPin=7, buzzer=19; /* ULTRASONİK MESAFE SENSÖRÜ VE BUZZER*/
int buzzer=46;
int CLK_PIN=52,DAT_PIN=50, RST_PIN=48 ;
virtuabotixRTC myRTC(CLK_PIN,DAT_PIN,RST_PIN);
int motor_calis=digitalRead(myRTC.hours);
#define DHTPIN 24
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);
int rs=38, en=40, d4=36,d5=34,d6=32,d7=30;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7); 
int in1=3;
int in2=4;
int enA=5;
int enB=6;
int kumandaPin = 2;/* KUMANDANIN PİNİNİN BAĞLI OLDUĞU YER*/
char data ;
int sure=0;
int sure1=0;
int sure2=0;
IRrecv kumanda(kumandaPin);
decode_results sonuclar;



void setup()
{
  
  pinMode(13,OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);*/
  pinMode(dugme1, INPUT);
  pinMode(buzzer, OUTPUT);
  kumanda.enableIRIn();
  dht.begin();
  lcd.begin(16,2);
  Serial.begin(9600);
myRTC.setDS1302Time(50,12,13,3,25,05,2022);

}
void loop()
{
  
    long sure,mesafe;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    sure=pulseIn(echoPin, HIGH);
    mesafe=(sure/2)/29.1;
    Serial.print("MESAFE;");
    Serial.print(mesafe);
    Serial.println("cm");
   
    
if(mesafe<=10)
    {
      digitalWrite(buzzer,HIGH);
        delay(100);
      digitalWrite(buzzer,LOW);
        delay(100);
      } */

myRTC.updateTime();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("TARIH:");
    lcd.print(myRTC.dayofmonth);
    lcd.print("/");
    lcd.print(myRTC.month);
    lcd.print("/");
    lcd.println(myRTC.year);
    lcd.setCursor(0,1);
    lcd.print("SAAT:");
    lcd.print(myRTC.hours);
    lcd.print(":");
    lcd.print(myRTC.minutes);
    lcd.print(":");
    lcd.println(myRTC.seconds);
      delay(100);


      
  {
  if(kumanda.decode(&sonuclar))
  {
    Serial.print("Tuş kodu: ");
    Serial.println(sonuclar.value, HEX);
    kumanda.resume();
      if(BTSerial.available())
 {
  char data = BTSerial.read();
  Serial.println(data);
    
      }
    
  if (myRTC.hours==13 && myRTC.minutes ==13 && myRTC.seconds==0)

{
      digitalWrite(buzzer,HIGH);
       delay(100);
      digitalWrite(buzzer,LOW);
        delay(100);
     }

  if(myRTC.hours==13 && myRTC.minutes ==13 && myRTC.seconds<=50
     {
    while(sure<=1000)
    {
       digitalWrite(in1,LOW);
        digitalWrite(in2,HIGH);
        sure++;
    }
  
}
   if (myRTC.hours==13 && myRTC.minutes ==13 && myRTC.seconds<=50)

{
      digitalWrite(buzzer,HIGH);
       delay(100);
      digitalWrite(buzzer,LOW);
        delay(100);
     }
    delay(100);*/
  if(sonuclar.value == 0xFF30CF ||0xFF7A85 || 0xFF10EF 
  { 
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);
  for (int sure=0 ; sure<200; sure++)
  Serial.println(sure);
  delay(1000);
  digitalWrite(enA,LOW);
  digitalWrite(enB,LOW);
  
  }
     while (sure<=100)
{
  digitalWrite(enA,LOW);
  digitalWrite(enB,LOW);
 sure=0;
}
   else if(sonuclar.value == 0xFF7A85   || (data='1') )  
  { 
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);
   delay(3000);
  digitalWrite(enA,LOW);
  digitalWrite(enB,LOW);
  }
   for (int sure2=0 ; sure2<300; sure2++)
    Serial.println(sure);
  
    while (sure<=300)
{
  digitalWrite(enA,LOW);
  digitalWrite(enB,LOW);
 sure=0;
}

 
     
      
 if (data='1')
 {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(enA,HIGH);
  digitalWrite(enB,HIGH);
   delay(3000);
  digitalWrite(enA,LOW);
  digitalWrite(enB,LOW);
   }
 

  
  if(sonuclar.value == 0xFF30CF ||(data = '2') )  
  
  { 
        /*digitalWrite(in3,LOW);
        digitalWrite(in4,HIGH);*/
 sure++;  
  
  }
 
if(sonuclar.value == 0xFF18E7)
{
sure1=0;
}*/
     
if(digitalRead(dugme1)== true)
{
        digitalWrite(in1,LOW);
        digitalWrite(in2,LOW);
}

lcd.clear();
lcd.setCursor(0,0);
float temp=dht.readTemperature();
float hum= dht.readHumidity();
Serial.print("SICAKLIK");
Serial.setCursor(10,0);
Serial.print(temp);
Serial.setCursor(1,0);
Serial.print("NEM");
Serial.print(hum);



}
}
