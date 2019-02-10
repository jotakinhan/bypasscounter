 
float x = 0.1; //Counts passers-by
float w = 0; //Checks if x changed by comparing to x, if changed proceeds to add x value to database
int y = 0; //Manages infrared sensors
int z = 0; //Manages infrared sensors
int a = 0; //Manages infrared sensors
int b = 0; //Manages infrared sensors

void setup()  {
 
 Serial.begin(115200); //Start serial communication baud rate at 115200
 pinMode(5,INPUT); //Pin 5 as signal input
 pinMode(6,INPUT); //Pin 6 as signal input

}
 
void loop()  {
 while(1)  {
  
   

   if(b==1) {

    if(digitalRead(5)==HIGH) {

      if(digitalRead(6)==HIGH) {
        b=0;
      }
      
    }
    
   } else {

    if(a==1) {
      
    } else {

      if(z==1) {
    
       } else {
            if(digitalRead(5)==LOW)  { 
            if(y==1) {
              
            } else {
             x++;
             y=1;
             a=1;
            }
            
           } else {
             y=0;
             a=0;
             b=0;
           }
           
         }
      
    }
    
    
   
   }

   
   
   
   
  if(a==1) {

    if(digitalRead(5)==HIGH) {

      if(digitalRead(6)==HIGH) {
        a=0;
      }
      
    }
    
   } else {

    if(b==1) {
      
    } else {

      if(y==1) {
          
         } else {
            if(digitalRead(6)==LOW)  { 
            if(z==1) {
              
            } else {
             x--;
             z=1;
             b=1;
            }
            
           } else {
             z=0;
             b=0;
             a=0;
           }
           
         }
      
    }

      
    
   } 

   if(x<=0) {
   x=0.1;
   } else {
    
   }
    

   if(x<=0) {
    
   } else {
    if(w==x) {
    
   } else {
    //value is added to database with http GET, in this case two different databases
    Serial.print("GET http://one.api.botbook.com/add/g4gQqNpyVXl/?x=");
    Serial.println(x);
    Serial.print("GET http://one.api.botbook.com/add/MmWLlseXldg/?x=");
    Serial.println(x);
    w=x;
   }
   }
  
   
   
   delay(10);
 }
}
