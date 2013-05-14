

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

Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(1,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(1,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(1,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(1,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);

// END OF C


delay(500);
Rb.blankDisplay();
delay(500);

//Start of O 


//BOTTOM Middle 2
Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,3,RED[z],GREEN[z],BLUE[z]);

//END BOTTOM MIDDLE 2

Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(0,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(0,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

// END OF O
delay(500);
Rb.blankDisplay();
delay(500);
//Start of N 

Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

//END OF N

delay(500);
Rb.blankDisplay();
delay(500);
//Start of N#2
Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

//END OF N #2

delay(500);
Rb.blankDisplay();
delay(500);

//Start of O#2

//BOTTOM Middle 2
Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(0,3,3,RED[z],GREEN[z],BLUE[z]);

//END BOTTOM MIDDLE 2

Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(0,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(0,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,3,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

// END OF O#2

delay(500);
Rb.blankDisplay();
delay(500);
//Start of R
Rb.setPixelZXY(0,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(0,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(1,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(2,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,3,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,2,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,1,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,0,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,1,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,2,0,RED[z],GREEN[z],BLUE[z]);
Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,3,0,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(3,3,1,RED[z],GREEN[z],BLUE[z]);


Rb.setPixelZXY(3,3,2,RED[z],GREEN[z],BLUE[z]);

Rb.setPixelZXY(3,3,3,RED[z],GREEN[z],BLUE[z]);

//END OF R


delay(1000);

Rb.blankDisplay();
delay(1000);

z=5;





}
