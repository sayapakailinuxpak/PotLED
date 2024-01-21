const int POT_PIN = A0;
const int LED_PINS[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int pin = 0; pin < 8; pin++) {
    pinMode(LED_PINS[pin], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(POT_PIN);  
  turnOnLED(value);
  Serial.println(value);
  delay(30);
}


void turnOnLED(int potentiometerValue) {
  if (potentiometerValue == 0) {
    for (int pin = 0; pin < 8; pin++) {
      digitalWrite(LED_PINS[pin], LOW);
    }
  } else if(potentiometerValue == 1023) {
    for (int pin = 0; pin < 8; pin++) {
      digitalWrite(LED_PINS[pin], HIGH);
    }
  } else {
    boolean state;
    if (potentiometerValue > 1 && potentiometerValue < 60) {
      digitalWrite(LED_PINS[0], HIGH);
    } else {
      digitalWrite(LED_PINS[1], LOW);
      digitalWrite(LED_PINS[2], LOW);
      digitalWrite(LED_PINS[3], LOW);
      digitalWrite(LED_PINS[4], LOW);
      digitalWrite(LED_PINS[5], LOW);
      digitalWrite(LED_PINS[6], LOW);
      digitalWrite(LED_PINS[7], LOW);
    }

    if (potentiometerValue > 60 && potentiometerValue < 120) {
      digitalWrite(LED_PINS[1], HIGH);
    } else {
      digitalWrite(LED_PINS[2], LOW);
      digitalWrite(LED_PINS[3], LOW);
      digitalWrite(LED_PINS[4], LOW);
      digitalWrite(LED_PINS[5], LOW);
      digitalWrite(LED_PINS[6], LOW);
      digitalWrite(LED_PINS[7], LOW);
    }

    if (potentiometerValue > 120 && potentiometerValue < 360) {
      digitalWrite(LED_PINS[1], HIGH);
      digitalWrite(LED_PINS[2], HIGH);
    } else {
      digitalWrite(LED_PINS[3], LOW);
      digitalWrite(LED_PINS[4], LOW);
      digitalWrite(LED_PINS[5], LOW);
      digitalWrite(LED_PINS[6], LOW);
      digitalWrite(LED_PINS[7], LOW);
    }

    if (potentiometerValue > 360 && potentiometerValue < 480) {
      digitalWrite(LED_PINS[1], HIGH);
      digitalWrite(LED_PINS[2], HIGH);
      digitalWrite(LED_PINS[3], HIGH);
    } else {
      digitalWrite(LED_PINS[4], LOW);
      digitalWrite(LED_PINS[5], LOW);
      digitalWrite(LED_PINS[6], LOW);
      digitalWrite(LED_PINS[7], LOW);
    }
    
    if (potentiometerValue > 480 && potentiometerValue < 640) {
      digitalWrite(LED_PINS[1], HIGH);
      digitalWrite(LED_PINS[2], HIGH);
      digitalWrite(LED_PINS[3], HIGH);
      digitalWrite(LED_PINS[4], HIGH);
    } else {
      digitalWrite(LED_PINS[5], LOW);
      digitalWrite(LED_PINS[6], LOW);
      digitalWrite(LED_PINS[7], LOW);
    }
    
    if (potentiometerValue > 640 && potentiometerValue < 720) {
      digitalWrite(LED_PINS[1], HIGH);
      digitalWrite(LED_PINS[2], HIGH);
      digitalWrite(LED_PINS[3], HIGH);
      digitalWrite(LED_PINS[4], HIGH);
      digitalWrite(LED_PINS[5], HIGH);
    } else {
      digitalWrite(LED_PINS[6], LOW);
      digitalWrite(LED_PINS[7], LOW);
    }
    
    if (potentiometerValue > 720 && potentiometerValue < 960) {
      digitalWrite(LED_PINS[1], HIGH);
      digitalWrite(LED_PINS[2], HIGH);
      digitalWrite(LED_PINS[3], HIGH);
      digitalWrite(LED_PINS[4], HIGH);
      digitalWrite(LED_PINS[5], HIGH);
      digitalWrite(LED_PINS[6], HIGH);
    } else {
      digitalWrite(LED_PINS[7], LOW);
    }
    
    if (potentiometerValue > 960 && potentiometerValue < 1024) {
      digitalWrite(LED_PINS[1], HIGH);
      digitalWrite(LED_PINS[2], HIGH);
      digitalWrite(LED_PINS[3], HIGH);
      digitalWrite(LED_PINS[4], HIGH);
      digitalWrite(LED_PINS[5], HIGH);
      digitalWrite(LED_PINS[6], HIGH);
      digitalWrite(LED_PINS[7], HIGH);
    } 

    // if (potentiometerValue < 60) {
    //   digitalWrite(LED_PINS[1], LOW);
    //   digitalWrite(LED_PINS[2], LOW);
    //   digitalWrite(LED_PINS[3], LOW);
    //   digitalWrite(LED_PINS[4], LOW);
    //   digitalWrite(LED_PINS[5], LOW);
    //   digitalWrite(LED_PINS[6], LOW);
    //   digitalWrite(LED_PINS[7], LOW);
    // } 

    // if (potentiometerValue < 120) {
    //   digitalWrite(LED_PINS[2], LOW);
    //   digitalWrite(LED_PINS[3], LOW);
    //   digitalWrite(LED_PINS[4], LOW);
    //   digitalWrite(LED_PINS[5], LOW);
    //   digitalWrite(LED_PINS[6], LOW);
    //   digitalWrite(LED_PINS[7], LOW);
    // }

  }
}

