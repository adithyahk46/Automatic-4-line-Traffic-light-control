const int button =11;

int val;

const int greenLED1 = 5;
const int greenLED2 = 4;
const int greenLED3 = 3;
const int greenLED4 = 2;

const int yellowLED1 = 6;
const int yellowLED2 = 7;
const int yellowLED3 = 8;
const int yellowLED4 = 9;



void setup() {
  pinMode(greenLED1, OUTPUT);
  pinMode(yellowLED1, OUTPUT);
 
  pinMode(greenLED2, OUTPUT);
  pinMode(yellowLED2, OUTPUT);
 
  pinMode(greenLED3, OUTPUT);
  pinMode(yellowLED3, OUTPUT);
 
  pinMode(greenLED4, OUTPUT);
  pinMode(yellowLED4, OUTPUT);
 

  pinMode(button, INPUT_PULLUP);
 
}

void loop() 
{
  val= digitalRead(button);
  if (val==0 )
  {
 
    line1();
    delay(5000);
    line2();
    delay(5000);
    line3();
    delay(5000);
    line4();
    delay(5000);
  }
  else {
   offlight();
  }
}
 
    void line1(){ 
    digitalWrite(yellowLED1, LOW);
    digitalWrite(greenLED1, HIGH);
   
    digitalWrite(yellowLED3, LOW);
    digitalWrite(greenLED3, LOW);

    digitalWrite(yellowLED4, LOW);
    digitalWrite(greenLED4, LOW);
      
    digitalWrite(greenLED2, LOW);    
    delay(4000); 
    digitalWrite(yellowLED2, HIGH);
      
    }
    
    void line2(){
    digitalWrite(yellowLED1, LOW);
    digitalWrite(greenLED1, LOW);

    digitalWrite(yellowLED2, LOW);
    digitalWrite(greenLED2, HIGH);

    digitalWrite(yellowLED4, LOW);
    digitalWrite(greenLED4, LOW);
  
    digitalWrite(greenLED3, LOW); 
      delay(4000);
    digitalWrite(yellowLED3, HIGH);
    

   
    }
  
    void line3(){
    digitalWrite(yellowLED1, LOW);
    digitalWrite(greenLED1, LOW);
      
    digitalWrite(yellowLED2, LOW);
    digitalWrite(greenLED2, LOW);

    digitalWrite(yellowLED3, LOW);
    digitalWrite(greenLED3, HIGH);

    digitalWrite(greenLED4, LOW);
    delay(4000);
    digitalWrite(yellowLED4,HIGH);
    }

  void line4(){
   
    digitalWrite(greenLED1, LOW);
      
    digitalWrite(yellowLED2, LOW);
    digitalWrite(greenLED2, LOW);

    digitalWrite(yellowLED3, LOW);
    digitalWrite(greenLED3, LOW);
    
    digitalWrite(greenLED4, HIGH);
    digitalWrite(yellowLED4, LOW);
    
    delay(4000);
    digitalWrite(yellowLED1, HIGH);
    }
void offlight(){
    digitalWrite(yellowLED1, LOW);
    digitalWrite(greenLED1, LOW);
   
    digitalWrite(yellowLED3, LOW);
    digitalWrite(greenLED3, LOW);

    digitalWrite(yellowLED4, LOW);
    digitalWrite(greenLED4, LOW);
      
    digitalWrite(greenLED2, LOW);    
    delay(4000); 
    digitalWrite(yellowLED2, LOW);
  }