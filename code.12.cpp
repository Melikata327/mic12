int led = 6;
int brightness = 0;
int fade = 5;
 

void setup() {
  
  analogWrite(led,brightness);
  
   brightness = brightness +fade ; 
   
  if(brightness <= 0 || brightness >= 255)  {
   
  fade = -fade;
  
  }
    delay(10);
