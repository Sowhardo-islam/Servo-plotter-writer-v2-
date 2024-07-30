#include <Servo.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

Servo s1;
Servo s2;
Servo p1;


#define TFT_DC 5
#define TFT_RST 6
#define TFT_CS 7

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);


void setup() {
  // Serial setup
  Serial.begin(9600);
  Serial.println("System is starting.");


  delay(100);
  
  

  // Servo attachment
  s1.attach(2);  // Attach servo s1 to pin 2
  s2.attach(3);  // Attach servo s2 to pin 3
  p1.attach(4);  // Attach servo p1 to pin 4
  delay(100);


//////////tft////////////

  tft.initR(INITR_BLACKTAB);
  tft.fillScreen(ST7735_BLACK);
  /////////////////////////
   tft.setRotation(2);
    tft.setTextColor(ST7735_WHITE);

   

   tft.setTextSize(1);
  tft.setCursor(10, 10);
  tft.println("V2");

  tft.setCursor(20, 60);
 tft.setTextSize(2);
 tft.println("WRITER");

 

 tft.setTextSize(1);
  tft.setCursor(10, 130);
  tft.println("MADE BY >>");

   tft.setCursor(10, 150);
  tft.println("Tech Innovator");



for (int pos = 20; pos <=90; pos +=1){

tft.setCursor(pos, 80);
tft.println("*");
delay(100);

}

 delay(500);

tft.fillScreen(ST7735_BLACK);

  // Serial message
  Serial.println("System is started. see (tft display) drawing info.");
}

void start(){
 p1.write(90);
  for (int pos1 = 90, pos2 = 90; pos1 <=150 && pos2 <= 160; pos1 +=1,pos2  +=1){
 s1.write(pos1);
    s2.write(pos2);
    delay(50);

  }
}
void end(){

   p1.write(90);
  for (int pos1 = 150, pos2 = 160; pos1 >=90 && pos2 >= 90; pos1 -=1,pos2  -=1){
 s1.write(pos1);
    s2.write(pos2);
    delay(50);
}
}

void sqare(){
  p1.write(90);
  delay(500);
  s1.write(150);
  s2.write(160);
  delay(500);
   p1.write(0);
for (int pos1 = 150, pos2 = 160; pos1 <= 180 && pos2 >= 110; pos1 += 1, pos2 -= 1) {
    s1.write(pos1);
    s2.write(pos2);
    Serial.print("s1 ");
    Serial.println(pos1);
     Serial.print("s2 ");
     Serial.println(pos2);

    delay(100);
  }
  delay(500);
  //////////
  for (int pos2 = 130; pos2 >=100; pos2 -=1){
    s2.write(pos2);
     Serial.print("s22 ");
     Serial.println(pos2);
      
    delay(100);
  }
  for (int pos1 = 180,pos2 = 100; pos1 >=150 && pos2 <=130; pos1 -=1,pos2 +=1){
    s1.write(pos1);
    s2.write(pos2);
     Serial.print("s1 ");
    Serial.println(pos1);
     Serial.print("s2 ");
     Serial.println(pos2);

    delay(100);
  }
   for (int pos2 = 130; pos2 <=160; pos2 +=1){
    s2.write(pos2);
    Serial.print("pos2 ");
    Serial.println(pos2);
    delay(100);
    
   }
   p1.write(90);
}
void triangle(){
p1.write(90);
 s1.write(150);
 s2.write(160);
 delay(500);
   p1.write(0);
 

   for (int pos2 =160; pos2 >=120; pos2 -=1){
    s2.write(pos2);
    delay(100);
   }
   delay(100);
   for (int pos1 = 150, pos2 = 120; pos1 >=110, pos2 <=160; pos1 -=2, pos2 +=2){
     s1.write(pos1);
  s2.write(pos2);
   Serial.print("s1 ");
    Serial.println(pos1);
     Serial.print("s2 ");
     Serial.println(pos2);
     delay(100);

   }
for (int pos1 = 110 ;pos1 <=150; pos1 +=1){
  s1.write(pos1);
   Serial.print("pos1 ");
  Serial.println(pos1);
  delay(100);
 
}
p1.write(90);
}


void a(){

   p1.write(90);
  delay(500);
   s1.write(100);
  s2.write(150);
  delay(500);
  p1.write(0);


 for (int pos2 = 150 ; pos2 >=120; pos2 -=1){
  s2.write(pos2);
    Serial.print("s2 ");
     Serial.println(pos2);
  delay(100);
 }
 p1.write(90);
 delay(500);
 s2.write(150);
 delay(500);
 p1.write(0);

 delay(100);
  for ( int pos1 = 100, pos2 = 150; pos1 >=80 && pos2 <=180; pos1 -=1, pos2 +=1){

     s1.write(pos1);
  s2.write(pos2);
   Serial.print("s1 ");
    Serial.println(pos1);
     Serial.print("s2 ");
     Serial.println(pos2);
     delay(100);
  }
  //////////////////////////////////////////////////////////////////////////////////
  p1.write(90);
 delay(500);
 s1.write(100);
 s2.write(150);
 delay(500);
 p1.write(0);

for (int pos2 = 150 ; pos2 >=140; pos2 -=1){
  s2.write(pos2);
    Serial.print("s2 ");
     Serial.println(pos2);
  delay(100);
 }
  for ( int pos1 = 100, pos2 = 140; pos1 >=90 && pos2 <=150; pos1 -=1, pos2 +=1){

     s1.write(pos1);
  s2.write(pos2);
   Serial.print("s1 ");
    Serial.println(pos1);
     Serial.print("s2 ");
     Serial.println(pos2);
     delay(100);
  }

  
for (int pos2 = 150 ; pos2 <=160; pos2 +=1){
  s2.write(pos2);
    Serial.print("s2 ");
     Serial.println(pos2);
  delay(100);
 }
 p1.write(90);


}



void loop() {


///////SQARE//////////////////////////////////////////////////////////////////////////////////////////////////////////
tft.fillScreen(ST7735_BLACK);
tft.setTextColor(ST7735_GREEN);
tft.setTextSize(2);
tft.setCursor(0, 20);
tft.println("SQARE IS");

tft.setCursor(0, 40);
tft.println("DRAWING:");

tft.setTextColor(ST7735_WHITE);

for (int num = 10; num >=0; num -=1){
tft.setCursor(40,140);
tft.println(num);
delay(1000);
tft.fillRect(30, 130,60, 150, ST7735_BLACK);

}

tft.setTextColor(ST7735_GREEN);

tft.fillScreen(ST7735_BLACK);
tft.setTextSize(2);
tft.setCursor(0, 20);
tft.println("SQARE IS");

tft.setCursor(0, 40);
tft.println("DRAWING!");
start();
delay(100);
sqare();
delay(100);
sqare();
delay(1000);
end();
delay(100);



////////////////////TRIANGLE/////////////////////////////////////////////////////////////////////////////
tft.fillScreen(ST7735_BLACK);
tft.setTextColor(ST7735_CYAN);
tft.setTextSize(2);
tft.setCursor(0, 20);
tft.println("TRIANGLE   IS");

tft.setCursor(0, 80);
tft.println("DRAWING:");

tft.setTextColor(ST7735_WHITE);

for (int num = 10; num >=0; num -=1){
tft.setCursor(40,140);
tft.println(num);
delay(1000);
tft.fillRect(30, 130,60, 150, ST7735_BLACK);

}

tft.setTextColor(ST7735_CYAN);

tft.fillScreen(ST7735_BLACK);
tft.setTextSize(2);
tft.setCursor(0, 20);
tft.println("TRIANGLE IS");

tft.setCursor(0, 80);
tft.println("DRAWING!");
start();
delay(100);
triangle();
delay(100);
triangle();
delay(1000);
end();
delay(100);

////////////////////////A///////////////////////////////////////////////////////////////////////////////////////////////

tft.fillScreen(ST7735_BLACK);
tft.setTextColor(ST7735_YELLOW);
tft.setTextSize(2);
tft.setCursor(0, 20);
tft.println("SOMETHING");

tft.setCursor(0, 40);
tft.println("IS DRAWING:");

tft.setTextColor(ST7735_WHITE);

for (int num = 10; num >=0; num -=1){
tft.setCursor(40,140);
tft.println(num);
delay(1000);
tft.fillRect(30, 130,60, 150, ST7735_BLACK);

}
tft.setTextColor(ST7735_YELLOW);

tft.fillScreen(ST7735_BLACK);
tft.setTextSize(2);
tft.setCursor(0, 20);
tft.println("SOMETHING");

tft.setCursor(0, 40);
tft.println("IS DRAWING!");
start();
delay(100);
a();
delay(100);
a();
delay(1000);
end();
delay(100);

//////////////////////////finish//////////////////////////////////////////////////////////////////////////

tft.fillScreen(ST7735_BLACK);

tft.setTextColor(ST7735_ORANGE);

tft.setTextSize(1);
tft.setCursor(0, 20);
tft.println("ALL DRAWING");

tft.setCursor(0, 40);
tft.println("IS FINISH!");

tft.setCursor(0, 60);
tft.println("IT START AGAIN AFTER 1 MIN.");

tft.setCursor(0, 100);
tft.println("OR PRESS RESET BUTTON.");

tft.setCursor(0, 110);
tft.println("TO CONTINUE >>.");

tft.setTextColor(ST7735_WHITE);


for (int num = 60; num >=0; num -=1){

tft.setCursor(40,140);
tft.println(num);
delay(1000);
tft.fillRect(30, 130,60, 150, ST7735_BLACK);

}
tft.setTextColor(ST7735_ORANGE);

tft.setCursor(20, 20);
tft.println("NOW STARTING");
delay(1000);
}
 