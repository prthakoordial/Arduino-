// 6 consecutive digital pins for the LEDs
int first = 13;
int second = 12;
int third = 11;
int fourth = 10;
int fifth = 9;
int sixth = 8;

// pin for the button switch
int button;
// value to check state of button switch
int pressed;
int randomnumber; 

void setup(); {
  // set all LED pins to OUTPUT
  pinMode(first, OUTPUT)
  pinMode(second, OUTPUT)
  pinMode(third, OUTPUT)
  pinMode(fourth, OUTPUT)
  pinMode(fifth, OUTPUT)
  pinMode(sixth, OUTPUT)
  // set button pin to INPUT
  pinMode(button, INPUT)
  // initialize random seed by noise from analog pin 0 (should be unconnected)
  randomSeed(analogRead(0));
}

void loop() {
  // if button is pressed - throw the dice
  pressed;

  if (pressed == HIGH) {
    // remove previous number to LOW
    
    // get a random number in the range [1,6]
    randomnumber = random(1,6);
    
    //write IF statements to light up the lights 
    if(randomnumber == 1){
      digitalWrite(first, HIGH); 
     }
    if(randomnumber == 2){
      digitalWrite(second, HIGH); 
      }
    if(randomnumber == 3){
       digitalWrite(third, HIGH); 
        }
    if(randomnumber == 4){
      digitalWrite(fourth, HIGH); 
      }
    if(randomnumber == 5){
      digitalWrite(fifth, HIGH); 
      }
    if(randomnumber == 6){
      digitalWrite(sixth, HIGH);
      }
  }
}
