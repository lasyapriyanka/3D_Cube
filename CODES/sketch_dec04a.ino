int ds=2;
int latch=3;
int cp=4;

int l1=5;
int l2=6;
int l3=7;
int l4=8;
int l5=9;
int l6=10;
int l7=11;
int l8=12;

byte leds = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ds,OUTPUT);
  pinMode(cp,OUTPUT);
  pinMode(latch,OUTPUT);
  
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l5,OUTPUT);
  pinMode(l6,OUTPUT);
  pinMode(l7,OUTPUT);
  pinMode(l8,OUTPUT);
    
 reset(); 
}

void reset()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
}

void set()
{
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
}
void set1()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
}

void set2()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
}

void set3()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,HIGH);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
}
void set4()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,HIGH);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
}

void set5()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,HIGH);
  digitalWrite(l7,LOW);
  digitalWrite(l8,LOW);
}

void set6()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,HIGH);
  digitalWrite(l8,LOW);
}

void set7()
{
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(l4,LOW);
  digitalWrite(l5,LOW);
  digitalWrite(l6,LOW);
  digitalWrite(l7,LOW);
  digitalWrite(l8,HIGH);
}
void set2_7()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,LOW);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,HIGH);
}
void set2_6()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,LOW);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,HIGH);digitalWrite(l8,LOW);
}
void set2_5()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,LOW);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,HIGH);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set2_4()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,LOW);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,HIGH);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set2_3()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,LOW);digitalWrite(l3,LOW);digitalWrite(l4,HIGH);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set2_2()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,LOW);digitalWrite(l3,HIGH);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set2_1()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set3_7()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,HIGH);
}
void set3_6()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,HIGH);digitalWrite(l8,LOW);
}
void set3_5()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,HIGH);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set3_4()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,LOW);digitalWrite(l4,LOW);digitalWrite(l5,HIGH);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set3_3()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,LOW);digitalWrite(l4,HIGH);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set3_2()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set4_7()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set4_6()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,HIGH);digitalWrite(l8,LOW);
}
void set4_5()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,LOW);digitalWrite(l5,LOW);digitalWrite(l6,HIGH);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set4_4()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,LOW);digitalWrite(l5,HIGH);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set4_3()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}

void set5_7()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,HIGH);
}
void set5_6()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,LOW);digitalWrite(l6,LOW);digitalWrite(l7,HIGH);digitalWrite(l8,LOW);
}
void set5_5()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,LOW);digitalWrite(l6,HIGH);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}
void set5_4()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,HIGH);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}

void set6_7()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,HIGH);digitalWrite(l6,LOW);digitalWrite(l7,LOW);digitalWrite(l8,HIGH);
}

void set6_6()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,HIGH);digitalWrite(l6,LOW);digitalWrite(l7,HIGH);digitalWrite(l8,LOW);
}
void set6_5()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,HIGH);digitalWrite(l6,HIGH);digitalWrite(l7,LOW);digitalWrite(l8,LOW);
}

void set7_7()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,HIGH);digitalWrite(l6,HIGH);digitalWrite(l7,LOW);digitalWrite(l8,HIGH);
}

void set7_6()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,HIGH);digitalWrite(l6,HIGH);digitalWrite(l7,HIGH);digitalWrite(l8,LOW);
}
void set8_7()
{
  digitalWrite(l1,HIGH); digitalWrite(l2,HIGH);digitalWrite(l3,HIGH);digitalWrite(l4,HIGH);digitalWrite(l5,HIGH);digitalWrite(l6,HIGH);digitalWrite(l7,HIGH);digitalWrite(l8,HIGH);
}

void stack1()
{
  set7();
  delay(50);
  set6();
  delay(50);
  set5();
  delay(50);
  set4();
  delay(50);
  set3();
  delay(50);
  set2();
  delay(50);
  set1();
  delay(50);
  set();
  delay(50);
}
void stack2()
{
  set2_7();
  delay(50);
  set2_6();
  delay(50);
  set2_5();
  delay(50);
  set2_4();
  delay(50);
  set2_3();
  delay(50);
  set2_2();
  delay(50);
  set2_1();
  delay(50);
}

void stack3()
{
  set3_7();delay(50);set3_6();delay(50);set3_5();delay(50);set3_4();delay(50);set3_3();delay(50);set3_2();delay(50);
}
void stack4()
{
  set4_7();delay(50);set4_6();delay(50);set4_5();delay(50);set4_4();delay(50);set4_3();delay(50);
}

void stack5()
{
  set5_7();delay(50);set5_6();delay(50);set5_5();delay(50);set5_4();delay(50);
}
void stack6()
{
  set6_7();delay(70);set6_6();delay(70);set6_5();delay(70);
}
void stack7()
{
  set7_7();delay(90);set7_6();delay(90);
}
void stack8()
{
  set8_7();delay(100);
}

int flag=0;
void loop()
{
  stack1();
  stack2();
  stack3();
  stack4();
  stack5();
  stack6();
  stack7();
  stack8();
   digitalWrite(l1,LOW);
   delay(200);
   digitalWrite(l2,LOW);
   delay(200);
   digitalWrite(l3,LOW);
   delay(200);
   digitalWrite(l4,LOW);
   delay(200);
   digitalWrite(l5,LOW);
   delay(200);
   digitalWrite(l6,LOW);
   delay(200);
   digitalWrite(l7,LOW);
   delay(200);
   digitalWrite(l8,LOW);
   delay(200);
   stack1();
  stack2();
  stack3();
  stack4();
  stack5();
  stack6();
  stack7();
  stack8();
   digitalWrite(l8,LOW);
   delay(200);
   digitalWrite(l7,LOW);
   delay(200);
   digitalWrite(l6,LOW);
   delay(200);
   digitalWrite(l5,LOW);
   delay(200);
   digitalWrite(l4,LOW);
   delay(200);
   digitalWrite(l3,LOW);
   delay(200);
   digitalWrite(l2,LOW);
   delay(200);
   digitalWrite(l1,LOW);
   delay(200);
 
  
}
  

