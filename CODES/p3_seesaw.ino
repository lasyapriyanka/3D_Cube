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
  digitalWrite(l2,HIGH);
  digitalWrite(l3,HIGH);
  digitalWrite(l4,HIGH);
  digitalWrite(l5,HIGH);
  digitalWrite(l6,HIGH);
  digitalWrite(l7,HIGH);
  digitalWrite(l8,HIGH);
}

int p3_flag=1;
int p3_count=1;
int p3_var=1;

void loop()
{
  leds=0;
  update();

  if(p3_count<=5)
    p3_cathodes1();
  else if(p3_count<=10)
    p3_cathodes2();
  else if(p3_count<=15)
    p3_cathodes3();
  else if(p3_count<=20)
    p3_cathodes4();
  else if(p3_count<=25)
    p3_cathodes5();
  else if(p3_count<=30)
    p3_cathodes6();
  else if(p3_count<=35)
    p3_cathodes7();
  else
    p3_cathodes8();
  p3_anodes();
  p3_flag++;
  delay(0);  
  if(p3_flag==9)
    p3_flag=1;
  reset();
  p3_count = p3_count + p3_var;
  if(p3_count==1||p3_count==40)
    p3_var*=-1;
}

void p3_anodes()
{ 
  for(int i=0;i<64;i++)
  {
      bitSet(leds,p3_flag-1);
    update();
  }  
}

void p3_cathodes1()
{              
  if(p3_flag==1)
  {
    digitalWrite(l1,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l2,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l3,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l5,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l6,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l7,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l8,HIGH);
  }  
}

void p3_cathodes2()
{              
  if(p3_flag==1)
  {
    digitalWrite(l2,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l3,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l5,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l6,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l7,HIGH);
  }  
}

void p3_cathodes3()
{              
  if(p3_flag==1)
  {
    digitalWrite(l3,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l3,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l5,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l6,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l6,HIGH);
  }  
}

void p3_cathodes4()
{              
  if(p3_flag==1)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l5,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l5,HIGH);
  }  
}

void p3_cathodes5()
{              
  if(p3_flag==1)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l4,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l4,HIGH);
  }  
}

void p3_cathodes6()
{              
  if(p3_flag==1)
  {
    digitalWrite(l6,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l6,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l4,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l3,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l3,HIGH);
  }  
}

void p3_cathodes7()
{              
  if(p3_flag==1)
  {
    digitalWrite(l7,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l6,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l4,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l4,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l3,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l2,HIGH);
  }  
}

void p3_cathodes8()
{              
  if(p3_flag==1)
  {
    digitalWrite(l8,HIGH);
  }
  else if(p3_flag==2)
  {
    digitalWrite(l7,HIGH);
  }
  else if(p3_flag==3)
  {
    digitalWrite(l6,HIGH);
  }
  else if(p3_flag==4)
  {
    digitalWrite(l5,HIGH);
  }
  else if(p3_flag==5)
  {
    digitalWrite(l4,HIGH);   
  }
  else if(p3_flag==6)
  {
    digitalWrite(l3,HIGH);
  }
  else if(p3_flag==7)
  {
    digitalWrite(l2,HIGH);
  }
  else if(p3_flag==8)
  {
    digitalWrite(l1,HIGH);
  }  
}

void update()  
{
  digitalWrite(latch,LOW);
  shiftOut(ds,cp,MSBFIRST,leds);
  digitalWrite(latch,HIGH);
}
