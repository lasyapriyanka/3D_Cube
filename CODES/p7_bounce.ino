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

int p7_flag=1;

void loop()
{
  leds=0;
  update();
  p7_anodes();
  p7_cathodes(p7_flag);    
  if(p7_flag<=8)
  {
    delay(30);
  }
  else if(p7_flag<=14)
    delay(70);
  else if(p7_flag<=20)
    delay(30);
  else if(p7_flag<=25)
    delay(70);
  else if(p7_flag<=30)
    delay(30);
  else if(p7_flag<=34)
    delay(70);
  else if(p7_flag<=38)
    delay(30);
  else if(p7_flag<=41)
    delay(70);
  else if(p7_flag<=44)
    delay(30);
  else if(p7_flag<=46)
    delay(70);
  else if(p7_flag<=48)
    delay(30);
  p7_flag++; 
  if(p7_flag==49)
  {
    delay(400);
    p7_flag=1;
  }  
  reset();
}

void p7_anodes()
{ 
  for(int i=0;i<64;i++)
  {
      bitSet(leds,i);     
      update();
  }    
}

void p7_cathodes(int p7_flag)
{              
  if(p7_flag==1)
  {
    reset();
    digitalWrite(l8,HIGH);
  }
  else if(p7_flag==2||p7_flag==14)
  {
    reset();
    digitalWrite(l7,HIGH);
  }
  else if(p7_flag==3||p7_flag==13||p7_flag==15||p7_flag==25)
  {
    reset();
    digitalWrite(l6,HIGH);
  }
  else if(p7_flag==4||p7_flag==12||p7_flag==16||p7_flag==24||p7_flag==26||p7_flag==34)
  {
    reset();
    digitalWrite(l5,HIGH);
  }
  else if(p7_flag==5||p7_flag==11||p7_flag==17||p7_flag==23||p7_flag==27||p7_flag==33||p7_flag==35||p7_flag==41)
  {
    reset();
    digitalWrite(l4,HIGH);
  }
  else if(p7_flag==6||p7_flag==10||p7_flag==18||p7_flag==22||p7_flag==28||p7_flag==32||p7_flag==36||p7_flag==40||p7_flag==42||p7_flag==46)
  {
    reset();
    digitalWrite(l3,HIGH);
  }
  else if(p7_flag==7||p7_flag==9||p7_flag==19||p7_flag==21||p7_flag==29||p7_flag==31||p7_flag==37||p7_flag==39||p7_flag==43||p7_flag==45||p7_flag==47)
  {
    reset();
    digitalWrite(l2,HIGH);
  }
  else if(p7_flag==8||p7_flag==20||p7_flag==30||p7_flag==38||p7_flag==44||p7_flag==48)
  {
    reset();
    digitalWrite(l1,HIGH);
  }
}

void update()  
{
  digitalWrite(latch,LOW);
  shiftOut(ds,cp,MSBFIRST,leds);
  digitalWrite(latch,HIGH);
}
