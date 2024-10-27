# mic12
## شرح ازمایش
 در این ازمایش شدت روشنایی ال ای دی  باید گونه ای باشد که از صفربه صد درصد برسد و تاخیر ده ثانیه ای داشته باشد.
وبعد از ان  روند ان معکوس داشته باشد. 
کد
 ```cpp 
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
}
 ```
