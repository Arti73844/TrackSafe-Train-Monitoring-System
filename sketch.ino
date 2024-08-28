#define TRIG_PIN 5          // GPIO 5
#define ECHO_PIN 18         // GPIO 18

float distanceBetweenTrainAndTrackesp = -1100;  // Distance between train ESP32 and track ESP32 (in meters)
float distanceBetween_two_Train= 4500;
float speed_of_train=110;
bool Train_on_wrong_track = true;
// Function to measure distance using ultrasonic sensor
long measureDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);       // Ensure clean signal pulse
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);      // Send 10 microsecond pulse
  digitalWrite(TRIG_PIN, LOW);
  
  long duration = pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2;  // Convert to cm
  
  return distance;
}

// Function to control the train signals
void controlSignals() {
  long distance = measureDistance();
  if(distanceBetween_two_Train >= 4000 && speed_of_train <=120 ){

    if (distance< 10 && distanceBetweenTrainAndTrackesp < 1000 && distanceBetweenTrainAndTrackesp >=0) {
      if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);

        digitalWrite(33, LOW);
        digitalWrite(26, HIGH);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }

    } 
    else if (distanceBetweenTrainAndTrackesp >= 1000 && distanceBetweenTrainAndTrackesp < 2000) {
      if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
      
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }
      else{
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
            
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, LOW);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, HIGH);
        delay(1000000);
      }
    }
     else if (distanceBetweenTrainAndTrackesp >= 2000 && distanceBetweenTrainAndTrackesp < 3000) {
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(14, LOW);
      digitalWrite(15, HIGH);
     
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);

      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);

      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);

      digitalWrite(33, HIGH);
      digitalWrite(26, LOW);
      digitalWrite(20, LOW);
      digitalWrite(21, LOW);
      delay(1000000);
    
    }
     else if (distanceBetweenTrainAndTrackesp >=-1000 && distanceBetweenTrainAndTrackesp < 0){
      if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        delay(1000000);
      }
      else{ 
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);

        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, LOW);
        digitalWrite(26, HIGH);
        digitalWrite(20, HIGH);
        digitalWrite(21, LOW);
        delay(1000000);
      }
    } 
    
    else if (distanceBetweenTrainAndTrackesp >=-2000 && distanceBetweenTrainAndTrackesp < -1000){
     if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        delay(1000000);
     }
     else{ 
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, HIGH);

        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);}
    }
   else {
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(14, LOW);
     // digitalWrite(15, HIGH);

      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);

      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);

      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH);

      digitalWrite(33, LOW);
      digitalWrite(26, LOW);
      digitalWrite(20, LOW);
     // digitalWrite(21, HIGH);
    }
  }
   else if(distanceBetween_two_Train >= 4000 && speed_of_train >120 ){

    if (distance <= 10 && distanceBetweenTrainAndTrackesp < 1000  && distanceBetweenTrainAndTrackesp >=0) {
      if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        delay(1000000);
      }
      else{  
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, LOW);
        digitalWrite(26, HIGH);
        digitalWrite(20, HIGH);
        digitalWrite(21, LOW);
        delay(1000000);}

    }
    else if (distanceBetweenTrainAndTrackesp >= 1000 && distanceBetweenTrainAndTrackesp < 2000) {
       if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
            
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
       }
       else{
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
            
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, LOW);
        digitalWrite(26, HIGH);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
       }
    } 
    else if (distanceBetweenTrainAndTrackesp >= 2000 && distanceBetweenTrainAndTrackesp < 3000) {
        if(Train_on_wrong_track == true){
          digitalWrite(17, LOW);
          digitalWrite(16, LOW);
          digitalWrite(14, LOW);
          digitalWrite(15, HIGH);
        
          digitalWrite(13, LOW);
          digitalWrite(12, HIGH);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);

          digitalWrite(9, LOW);
          digitalWrite(8, HIGH);
          digitalWrite(6, HIGH);
          digitalWrite(7, LOW);

          digitalWrite(1, HIGH);
          digitalWrite(2, LOW);
          digitalWrite(4, LOW);
          digitalWrite(3, LOW);

          digitalWrite(33, HIGH);
          digitalWrite(26, LOW);
          digitalWrite(20, LOW);
          digitalWrite(21, LOW);
          delay(1000000);
        }
    
    } 
    else if (distanceBetweenTrainAndTrackesp >=-1000 && distanceBetweenTrainAndTrackesp < 0){
      if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }
    } 
    else if (distanceBetweenTrainAndTrackesp >=-2000 && distanceBetweenTrainAndTrackesp < -1000){
      if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }
    }
    else {
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(14, LOW);
     // digitalWrite(15, HIGH);

      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);

      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);

      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH);

      digitalWrite(33, LOW);
      digitalWrite(26, LOW);
      digitalWrite(20, LOW);
     // digitalWrite(21, HIGH);
    }
  }
  else if(distanceBetween_two_Train >= 3000 && distanceBetween_two_Train < 4000 && speed_of_train <=120 ){

    if (distance< 10 && distanceBetweenTrainAndTrackesp < 1000 && distanceBetweenTrainAndTrackesp >=0) {
      if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, LOW);
        digitalWrite(26, HIGH);
        digitalWrite(20, HIGH);
        digitalWrite(21, LOW);
        delay(1000000);
      }

    } 
    else if (distanceBetweenTrainAndTrackesp >= 1000 && distanceBetweenTrainAndTrackesp < 2000) {
       if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
            
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
       }
       else{
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
            
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, LOW);
        digitalWrite(26, HIGH);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
       }
      
    } else if (distanceBetweenTrainAndTrackesp >= 2000 && distanceBetweenTrainAndTrackesp < 3000) {
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(14, LOW);
      digitalWrite(15, HIGH);
     
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);

      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);

      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);

      digitalWrite(33, HIGH);
      digitalWrite(26, LOW);
      digitalWrite(20, LOW);
      digitalWrite(21, LOW);
      delay(1000000);
    
    } else if (distanceBetweenTrainAndTrackesp >=-1000 && distanceBetweenTrainAndTrackesp < 0){
      if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }
    } 
    else if (distanceBetweenTrainAndTrackesp >=-2000 && distanceBetweenTrainAndTrackesp < -1000){
      if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }
    }else {
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(14, LOW);
     // digitalWrite(15, HIGH);

      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);

      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);

      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH);

      digitalWrite(33, LOW);
      digitalWrite(26, LOW);
      digitalWrite(20, LOW);
     // digitalWrite(21, HIGH);
    }
  }
  
   else if(distanceBetween_two_Train >= 3000 && distanceBetween_two_Train < 4000 && speed_of_train >120 ){

    if (distance< 10 && distanceBetweenTrainAndTrackesp < 1000 && distanceBetweenTrainAndTrackesp >=0) {
      if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, HIGH);
        digitalWrite(15, LOW);
      
        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }

    } else if (distanceBetweenTrainAndTrackesp >= 1000 && distanceBetweenTrainAndTrackesp < 2000) {
      if(Train_on_wrong_track == true){
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
            
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, HIGH);
        digitalWrite(26, LOW);
        digitalWrite(20, LOW);
        digitalWrite(21, LOW);
        delay(1000000);
      }
      else{
        digitalWrite(17, LOW);
        digitalWrite(16, HIGH);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);
            
        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        digitalWrite(33, LOW);
        digitalWrite(26, HIGH);
        digitalWrite(20, HIGH);
        digitalWrite(21, LOW);
        delay(1000000);
      }
    } 
    else if (distanceBetweenTrainAndTrackesp >= 2000 && distanceBetweenTrainAndTrackesp < 3000) {
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(14, LOW);
      digitalWrite(15, HIGH);
     
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);

      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);

      digitalWrite(1, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);

      digitalWrite(33, HIGH);
      digitalWrite(26, LOW);
      digitalWrite(20, LOW);
      digitalWrite(21, LOW);
      delay(1000000);
    
    } else if (distanceBetweenTrainAndTrackesp >=-1000 && distanceBetweenTrainAndTrackesp < 0){
      if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        digitalWrite(9, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);

        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);

        delay(1000000);
      }
    } 
    else if (distanceBetweenTrainAndTrackesp >=-2000 && distanceBetweenTrainAndTrackesp < -1000){
      if(Train_on_wrong_track == true){
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(10, LOW);
        digitalWrite(11, LOW);

        delay(1000000);
      }
      else{
        digitalWrite(17, HIGH);
        digitalWrite(16, LOW);
        digitalWrite(14, LOW);
        digitalWrite(15, LOW);

        digitalWrite(13, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);

        digitalWrite(9, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);

        delay(1000000);
      }
    }else {
      digitalWrite(17, LOW);
      digitalWrite(16, LOW);
      digitalWrite(14, LOW);
     // digitalWrite(15, HIGH);

      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);

      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);

      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH);

      digitalWrite(33, LOW);
      digitalWrite(26, LOW);
      digitalWrite(20, LOW);
     // digitalWrite(21, HIGH);
    }
  }
}


void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(33, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  // Update the distance between the train ESP32 and track ESP32
  // distanceBetweenTrainAndTrackesp should be updated based on your specific method of calculation

  controlSignals();
  delay(2000);  // Check every 2 seconds
}
