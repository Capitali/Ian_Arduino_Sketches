//IanLed_1
//

int timer=10;
int timejump=100;
int timelimit=1000;
int pause=100;
int startpin=2;
int endpin=4;
int count;
int lowcount=25;
int topcount=200;
int countinc=1;
int countdelay=5;

void setup()  
{//** begin setup** begin setup** begin setup** begin setup** begin setup 

for (int pin = startpin; pin <= endpin; pin++){
    pinMode(pin, OUTPUT);
  }

}//** end setup** end setup** end setup** end setup** end setup** end setup



// the loop routine runs over and over again forever:
void loop()  
{//** begin loop** begin loop** begin loop** begin loop** begin loop** begin loop

while (timer <= timelimit){
  for (int pin = startpin ; pin <= endpin; pin++){
        digitalWrite(pin, HIGH);
        delay(timer);
        digitalWrite(pin, LOW);
    }          
    
    for (int pin = endpin ; pin >= startpin; pin--){
        digitalWrite(pin, HIGH);
        delay(timer);
        digitalWrite(pin, LOW);
    } 
    delay(pause);
  
    for (int pin = startpin ; pin <= endpin; pin++){
          digitalWrite(pin, HIGH);
          delay(timer);
          digitalWrite(pin, LOW);
      }          
    delay(pause);
    
        for (int pin = startpin ; pin <= endpin ; pin++){
          digitalWrite(pin, HIGH);
          delay(timer);
          digitalWrite(pin, LOW);
          digitalWrite(2, HIGH);
          digitalWrite(3, HIGH);
          delay(timer);
          digitalWrite(2, LOW);
          digitalWrite(3, LOW);
          digitalWrite(2, HIGH);
          digitalWrite(4, HIGH);
          delay(timer);
          digitalWrite(2, LOW);
          digitalWrite(4, LOW);
          digitalWrite(3, HIGH);
          digitalWrite(4, HIGH);
          delay(timer);
          digitalWrite(3, LOW);
          digitalWrite(4, LOW);
      }          
    delay(pause);

    digitalWrite(2, HIGH);
    for (count = lowcount; count <= topcount; count=count+countinc){
        digitalWrite(3, HIGH);
        delay(count);
        digitalWrite(3, LOW);
        delay(countdelay);
      }
    for (count = lowcount; count <= topcount; count=count+countinc){
        digitalWrite(4, HIGH);
        delay(count);
        digitalWrite(4, LOW);
        delay(countdelay);
      }
     digitalWrite(3, HIGH);
     for (count = lowcount; count <= topcount; count=count+countinc){
        digitalWrite(4, HIGH);
        delay(count);
        digitalWrite(4, LOW);
        delay(countdelay);
      }
      digitalWrite(2,LOW);
     for (count = lowcount; count <= topcount; count=count+countinc){  
        digitalWrite(4, HIGH);
        delay(count);
        digitalWrite(4, LOW);
        delay(countdelay);
      }
      for (count = lowcount; count <= topcount; count=count+countinc){
        digitalWrite(2, HIGH);
        delay(count);
        digitalWrite(2, LOW);
        delay(countdelay);
      }
  digitalWrite(2, HIGH);
    for (count = lowcount; count <= topcount; count=count+countinc){
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        delay(count);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        delay(countdelay);
      }     
           
  timer=timer+timejump;
  
   }
timer=10;
}//** end VOID loop** end VOID loop**

