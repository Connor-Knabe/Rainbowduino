//Connor Knabe Rainbowduino text name example
#include <Rainbowduino.h>

void setup()
{
  Rb.init(); //initialize Rainbowduino driver
  loop();
}


void loop(){
  unsigned int z;
  z=random(64);
//Start of C

  Rb.draw_C(z);
  delay(25);
  z=random(64);
  Rb.draw_C(z);


// END OF C
delay(500);
Rb.blankDisplay();
delay(500);
//Start of O 

  Rb.draw_O(z);
  z=random(64);
  delay(25);
  Rb.draw_O(z);
  z=random(64);
  delay(25);
  Rb.draw_O(z);
  
// END OF O
delay(500);
Rb.blankDisplay();
delay(500);
//Start of N 

  Rb.draw_N(z);
  z=random(64);
  delay(25);
  Rb.draw_N(z);
  z=random(64);
  delay(25);
  Rb.draw_N(z);
 
//END OF N
delay(500);
Rb.blankDisplay();
delay(500);
//Start of N#2 

  Rb.draw_N2(z);
  z=random(64);
  delay(25);
  Rb.draw_N2(z);
  z=random(64);
  delay(25);
  Rb.draw_N2(z);
   
//END OF N #2
delay(500);
Rb.blankDisplay();
delay(500);
//Start of O#2

  Rb.draw_O2(z);
  z=random(64);
  delay(25);
  Rb.draw_O2(z);
  z=random(64);
  delay(25);
  Rb.draw_O2(z);
 
// END OF O#2
delay(500);
Rb.blankDisplay();
delay(500);
//Start of R

  Rb.draw_R(z);
  z=random(64);
  delay(25);
  Rb.draw_R(z);
  z=random(64);
  delay(25);
  Rb.draw_R(z);
 
//END OF R

delay(1000);

Rb.blankDisplay();
delay(1000);

}
