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

int flag=0;

void loop()
{
  leds=0;
  update();
  cathodes(flag);
  anodes(flag);
  delay(100);
  flag++;
  if(flag==32)
  {
    flag=0;
    reset();
  }  
}

void anodes(int flag)
{ 
  if(flag==0||flag==31)
  {
    for(int i=0;i<64;i++)
    {
       bitSet(leds,i);
       update();
    } 
  } 
  else if(flag==1||flag==30)
  {
    for(int i=0;i<64;i++)
    {
       bitSet(leds,0);
       update();
    } 
  }
  else if(flag==2||flag==29)
  {
    for(int i=0;i<64;i++)
    {
       bitSet(leds,i);
       update();
    } 
  }
  else if(flag==3||flag==28)
  {
    for(int i=0;i<64;i++)
    {
       bitSet(leds,7);
       update();
    } 
  }
  else if(flag==4||flag==27)
  {
    for(int i=0;i<64;i++)
    {
      if(i!=0)
        bitSet(leds,i);
      update();
    }
  }
  else if(flag==5||flag==26)
  {
    for(int i=0;i<64;i++)
    {
      bitSet(leds,1);
      update();
    }
  }
  else if(flag==6||flag==25)
  {
    for(int i=0;i<64;i++)
    {
      if(i!=7&&i!=0)
        bitSet(leds,i);
      update();
    }
  }
  else if(flag==7||flag==24)
  {
    for(int i=0;i<64;i++)
    {
      bitSet(leds,6);
      update();
    }
  }
  else if(flag==8||flag==23)
  {
    for(int i=0;i<64;i++)
    {
      if(i!=0&&i!=1&&i!=7)
        bitSet(leds,i);
      update();
    }
  }
  else if(flag==9||flag==22)
  {
    for(int i=0;i<64;i++)
    {
      bitSet(leds,2);
      update();
    }
  }
  else if(flag==10||flag==21)
  {
    for(int i=0;i<64;i++)
    {
      if(i!=0&&i!=1&&i!=6&&i!=7)
        bitSet(leds,i);
      update();
    }
  }
  else if(flag==11||flag==20)
  {
    for(int i=0;i<64;i++)
    {
      bitSet(leds,5);
      update();
    }
  }
  else if(flag==12||flag==19)
  {
    for(int i=0;i<64;i++)
    {
      if(i==3||i==4||i==5)
        bitSet(leds,i);
      update();
    }
  }
  else if(flag==13||flag==18)
  {
    for(int i=0;i<64;i++)
    {
      bitSet(leds,3);
      update();
    }
  }
  else if(flag==14||flag==17)
  {
    for(int i=0;i<64;i++)
    {
      if(i==3||i==4)
        bitSet(leds,i);
      update();
    }
  }
  else if(flag==15||flag==16)
  {
    for(int i=0;i<64;i++)
    {
      bitSet(leds,4);
      update();
    }
  }
}  

void cathodes(int flag)
{
  if(flag==0||flag==31)
  {
    reset();
    digitalWrite(l8,HIGH);
  }
  else if(flag==1||flag==30)
  {
    set();
  }
  else if(flag==2||flag==29)
  {
    reset();
    digitalWrite(l1,HIGH);
  }
  else if(flag==3||flag==28)
  {
    set();
  }
  else if(flag==4||flag==27)
  {
    reset();
    digitalWrite(l8,HIGH);
  }
  else if(flag==5||flag==26)
  {
    set();
    digitalWrite(l1,LOW);
  }
  else if(flag==6||flag==25)
  {
    reset();
    digitalWrite(l2,HIGH);
  }
  else if(flag==7||flag==24)
  {
    set();
    digitalWrite(l1,LOW);
    digitalWrite(l8,LOW);
  }
  else if(flag==8||flag==23)
  {
    reset();
    digitalWrite(l7,HIGH);
  }
  else if(flag==9||flag==22)
  {
    set();
    digitalWrite(l1,LOW);
    digitalWrite(l2,LOW);
    digitalWrite(l7,LOW);
    digitalWrite(l8,LOW);
  }
  else if(flag==10||flag==21)
  {
    reset();
    digitalWrite(l3,HIGH);
  }
  else if(flag==11||flag==20)
  {
    set();
    digitalWrite(l1,LOW);
    digitalWrite(l2,LOW);
    digitalWrite(l7,LOW);
    digitalWrite(l8,LOW);
  }
  else if(flag==12||flag==19)
  {
    reset();
    digitalWrite(l6,HIGH);
  }
  else if(flag==13||flag==18)
  {
    reset();
    digitalWrite(l4,HIGH);
    digitalWrite(l5,HIGH);
    digitalWrite(l6,HIGH);
  }
  else if(flag==14||flag==17)
  {
    reset();
    digitalWrite(l4,HIGH);
  }
  else if(flag==15||flag==16)
  {
    reset();
    digitalWrite(l5,HIGH);
  }
}

void update()  
{
  digitalWrite(latch,LOW);
  shiftOut(ds,cp,MSBFIRST,leds);
  digitalWrite(latch,HIGH);
}
