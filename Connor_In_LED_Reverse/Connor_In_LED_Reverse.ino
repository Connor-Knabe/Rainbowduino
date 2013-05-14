/*

 Rainbowduino v3.0 Library examples : Mood Lamp 

*/

#include <Rainbowduino.h>



unsigned char RED[64] = {255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,238,221,204,188,171,154,137,119,102,85,
68,51,34,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,35,52};

unsigned char GREEN[64] = {0,17,34,51,68,85,102,119,136,153,170,187,204,221,238,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,238,221,204,188,170,154,136,120,102,86,68,52,34,18,0,0,0,0};

unsigned char BLUE[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,34,52,68,86,102,120,136,154,170,188,
204,221,238,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255};


void setup()
{
  Rb.init(); //initialize Rainbowduino driver
  loop();
}

unsigned int z=40,x,y;

void loop(){
//Start of Connor with C

//Z plane is top to bottom
//X plane goes right to left 0 1 2 3
//Y plane goes away from me 0 1 2 3
  int i;
  z=random(64);
  //Bottom Row
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,0,RED[z],GREEN[z],BLUE[z]);}
 
  //Left Column 
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,1,RED[z],GREEN[z],BLUE[z]);} 
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,0,RED[z],GREEN[z],BLUE[z]);}
  
  //Top Row
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,0,RED[z],GREEN[z],BLUE[z]);}
  
// END OF C


delay(500);
Rb.blankDisplay();
delay(500);


//Start of O 
  z=random(64);
  //Bottom Row
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,0,RED[z],GREEN[z],BLUE[z]);}
 
  //Left Column 
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,1,RED[z],GREEN[z],BLUE[z]);} 
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,0,RED[z],GREEN[z],BLUE[z]);}
  
  //Top Row
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,0,RED[z],GREEN[z],BLUE[z]);}

  //Right Side

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,3,RED[z],GREEN[z],BLUE[z]);}
    
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,2,RED[z],GREEN[z],BLUE[z]);}
 
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,0,RED[z],GREEN[z],BLUE[z]);}
  
// END OF O
delay(500);
Rb.blankDisplay();
delay(500);

//Start of N 
  z=random(64);
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,1,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,0,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,0,RED[z],GREEN[z],BLUE[z]);}
 
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,0,RED[z],GREEN[z],BLUE[z]);}
  
//END OF N
delay(500);
Rb.blankDisplay();
delay(500);
//Start of N#2 
  z=random(64);
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,1,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,0,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,0,RED[z],GREEN[z],BLUE[z]);}
 
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,0,RED[z],GREEN[z],BLUE[z]);}
//END OF N #2

delay(500);
Rb.blankDisplay();
delay(500);

//Start of O#2
  z=random(64);  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(0,i,0,RED[z],GREEN[z],BLUE[z]);}
 
  //Left Column 
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,1,RED[z],GREEN[z],BLUE[z]);} 
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(i,0,0,RED[z],GREEN[z],BLUE[z]);}
  
  //Top Row
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,3,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,2,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=1;i<4;i++) {Rb.setPixelZXY(3,i,0,RED[z],GREEN[z],BLUE[z]);}

  //Right Side

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,3,RED[z],GREEN[z],BLUE[z]);}
    
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,2,RED[z],GREEN[z],BLUE[z]);}
 
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,3,0,RED[z],GREEN[z],BLUE[z]);}
  
// END OF O#2

delay(500);
Rb.blankDisplay();
delay(500);

//Start of R
  z=random(64);
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,3,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,2,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,1,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(i,0,0,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,3,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,2,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,1,RED[z],GREEN[z],BLUE[z]);}
  
  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,i,0,RED[z],GREEN[z],BLUE[z]);}

  delay(75);
  for(i=0;i<4;i++) {Rb.setPixelZXY(3,3,i,RED[z],GREEN[z],BLUE[z]);}
//END OF R

delay(1000);

Rb.blankDisplay();
delay(1000);

}
