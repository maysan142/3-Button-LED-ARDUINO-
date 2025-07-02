int button1 = 1;
 int button2 = 2;
 int button3 = 3;
 int led1 =  8;
 int led2 =  9;
 int led3 =  10;
// variables will change:
int buttonState1 = 0; 
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  buttonState3 = digitalRead(button3);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 != 0) {
    // turn LED on:
    digitalWrite(led1, HIGH);
  } else {
    // turn LED off:
    digitalWrite(led1, LOW);
  }
  if (buttonState2 != 0) {
    // turn LED on:
    digitalWrite(led2, HIGH);
  } else {
    // turn LED off:
    digitalWrite(led2, LOW);
  }
  if (buttonState3 != 0) {
    // turn LED on:
    digitalWrite(led3, HIGH);
  } else {
    // turn LED off:
    digitalWrite(led3, LOW);
  }
  
}