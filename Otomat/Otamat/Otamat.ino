#include <LiquidCrystal.h>

LiquidCrystal lcd(PA_2, PA_3, PD_1, PD_2, PE_1, PE_2);

struct urunInfo{
  int    urunid;
  String urunad;
  int    urunstoksayisi;
  float  urunfiyat;
}urunInfo[5];

float usermoney =0.00;
float ybkr =0.25;
float ekr =0.50;
int   tl =1;
int tls=0,ekrs =0,ybkrs=0;
float para[]={20,20,10};
float para1[]={20,20,10};
float kasa = para[0]*0.25 + para[1]*0.50 + para[2];
const int buttonPin  = 19;     
const int buttonPin1 = 18;
const int buttonPin2 = 17;     
const int buttonPin3 = 14;
const int buttonPin4 = 38;
const int buttonPin5 = 37;
const int buttonPin6 = 36;
const int buttonPin7 = 35;
const int buttonPin8 = 34;
const int buttonPin9 = 33;
int breadboardButtonState  = 0; 
int breadboardButtonState1 = 0; 
int breadboardButtonState2 = 0; 
int breadboardButtonState3 = 0; 
int breadboardButtonState4 = 0; 
int breadboardButtonState5 = 0;
int breadboardButtonState6 = 0;
int breadboardButtonState7 = 0;
int breadboardButtonState8 = 0;
int breadboardButtonState9 = 0;

int tUrunStokSayisi[]={30,20,15,50,100};
long randNumber;
void setup() {
  urunInfo[0] ={1,"Su",30,0.50};
  urunInfo[1] ={2,"Cay",20,1};
  urunInfo[2] ={3,"Kahve",15,1.50};
  urunInfo[3] ={4,"Cikolata",50,1.75};
  urunInfo[4] ={5,"Biskuvi",100,2};
  
  Serial.begin(9600);
  pinMode(buttonPin , INPUT_PULLUP);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buttonPin5, INPUT_PULLUP);
  pinMode(buttonPin6, INPUT_PULLUP);
  pinMode(buttonPin7, INPUT_PULLUP);
  pinMode(buttonPin8, INPUT_PULLUP);
  pinMode(buttonPin9, INPUT_PULLUP);
  lcd.begin(16,2);
}
 int i=0,j=0;
 int s=0,sc=0;
boolean temp= true,temp1 = true,temp2= true;
float change =0;
void loop(){
  
  
  randomSeed(analogRead(0));
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  breadboardButtonState  =  digitalRead(buttonPin);
  breadboardButtonState1 = digitalRead(buttonPin1);
  breadboardButtonState2 = digitalRead(buttonPin2);
  breadboardButtonState3 = digitalRead(buttonPin3);
  breadboardButtonState4 = digitalRead(buttonPin4);
  breadboardButtonState5 = digitalRead(buttonPin5);
  breadboardButtonState6 = digitalRead(buttonPin6);
  breadboardButtonState7 = digitalRead(buttonPin7);
  breadboardButtonState8 = digitalRead(buttonPin8);
  breadboardButtonState9 = digitalRead(buttonPin9);
  if(breadboardButtonState3 == 0)
      temp = false;
  if(temp){
    printMoney();  
    if(breadboardButtonState == 0){
      usermoney += tl; 
      tls++;
      para[2]++;
    }  
    if(breadboardButtonState1 == 0){
      usermoney += ekr;
      ekrs++; 
      para[1]++;
    }   
    if(breadboardButtonState2 == 0){
      usermoney += ybkr;
      ybkrs++;
      para[0]++;
    }
    kasa = para[0]*0.25 + para[1]*0.50 + para[2]; 
  }
  else{
    if(temp1){
    if(sc==0){
      printProduct("");
      sc++;
      //printPS();
    }
    if(breadboardButtonState4 == 0){
      if(urunInfo[0].urunstoksayisi == 0){
        lcd.clear();
        lcd.print("Otomatta Su             ");
        lcd.setCursor(0,1);
        lcd.print("bulunmamaktadir.        ");
      }
      else{
        printProduct("Su secildi.          ");
        change += urunInfo[0].urunfiyat;
        urunInfo[0].urunstoksayisi--;  
      }
    }
    if(breadboardButtonState5 == 0){
      if(urunInfo[1].urunstoksayisi == 0){
        lcd.clear();
        lcd.print("Otomatta Cay           ");
        lcd.setCursor(0,1);
        lcd.print("bulunmamaktadir.       ");
      }
      else{
        printProduct("Cay secildi.        ");
        change += urunInfo[1].urunfiyat;
        urunInfo[1].urunstoksayisi--;   
      }
    }
    if(breadboardButtonState6 == 0){
      if(urunInfo[2].urunstoksayisi == 0){
        lcd.clear();
        lcd.print("Otomatta Kahve         ");
        lcd.setCursor(0,1);
        lcd.print("bulunmamaktadir.       ");
      }
      else{
        printProduct("Kahve secildi.      ");
        change += urunInfo[2].urunfiyat;
        urunInfo[2].urunstoksayisi--;  
      }  
    }
    if(breadboardButtonState7 == 0){
      if(urunInfo[3].urunstoksayisi == 0){
        lcd.clear();
        lcd.print("Otomatta Cikolata       ");
        lcd.setCursor(0,1);
        lcd.print("bulunmamaktadir.");
      }
      else{
        printProduct("Cikolata secildi.     ");
        change += urunInfo[3].urunfiyat;
        urunInfo[3].urunstoksayisi--;   
      } 
    }
    if(breadboardButtonState8 == 0){
      if(urunInfo[4].urunstoksayisi == 0){
        lcd.clear();
        lcd.print("Otomatta Biskuvi        ");
        lcd.setCursor(0,1);
        lcd.print("bulunmamaktadir.        ");
      }
      else{
        printProduct("Biskuvi secildi.      ");
        change += urunInfo[4].urunfiyat;
        urunInfo[4].urunstoksayisi--;   
      }
    }
    j++;
    if(breadboardButtonState3 == 0 and j>10)
    {
      temp1 = false;
    }}
    if(temp1 == false && temp2 == true){
      randNumber = random(5);
      Serial.println(randNumber);
      if(randNumber == 2){
        digitalWrite(RED_LED, HIGH);
        delay(1500);
        digitalWrite(RED_LED, LOW);
        lcd.clear();
        lcd.print("Paraniz iade ");
        lcd.setCursor(0,1);
        lcd.print("ediliyor..");
        kasa -= usermoney;
        for(int a=0;a<5;a++)
          urunInfo[a].urunstoksayisi = tUrunStokSayisi[a];
        int j=0;
        printP();
        for(j;j<3;j++)
          para[j] = para1[j];
        printP(); 
        temp2  = false;
      }
      else{
        digitalWrite(GREEN_LED, HIGH);
        delay(1500);
        digitalWrite(GREEN_LED, LOW);
      Serial.print("Borcunuz : ");
      Serial.println(change);
      printChange(usermoney-change);
      printP();
      Serial.print("Para üstü: ");
      Serial.println(usermoney-change);
      keepItChange(usermoney-change);
      for(int a=0;a<5;a++)
          tUrunStokSayisi[a]=urunInfo[a].urunstoksayisi;
      printP();
      temp2 = false;
      temp= true;
      temp1 = true;
      temp2= true;
      usermoney = 0;
      j=0;
      sc=0;
      change =0;
      }
      //printP();
      printPS();
      tls=0;
      ybkrs=0;
      ekrs=0; 
    }    
  }
  if(breadboardButtonState9 == 0){
      resetS();
    }
  delay(300);
}
void resetS(){ 
      usermoney= 0;
      para[0] -=ybkrs;
      para[1] -=ekrs;
      para[2] -=tls;    
      tls=0;
      ybkrs=0;
      ekrs=0; 
      for(int a=0;a<5;a++)
          urunInfo[a].urunstoksayisi=tUrunStokSayisi[a];
      printP();
      printPS();
      temp2 = false;
      temp= true;
      temp1 = true;
      temp2= true;
      usermoney = 0;
      j=0;
      sc=0;
      change =0;
}
void printChange(float change){
  lcd.clear();
  lcd.print("Para ustunuz                :");
  lcd.setCursor(0,1);
  lcd.print(change);
  lcd.print("TL                           ");
  delay(500);
}
void printMoney(){
  lcd.setCursor(0,0);
  lcd.print("Bakiyeniz :              ");
  lcd.setCursor(0,1);
  lcd.print(usermoney);
  lcd.print(" TL                          ");  
}
void printProduct(String pname){
  lcd.setCursor(0,0);
  lcd.print("Urun Seciniz...              ");
  lcd.setCursor(0,1);
  lcd.print(pname);
}
void keepItChange(float change){
  float tl =  para[2];
  float ek =  para[1];
  float ykr = para[0];
  while(change != 0){
    if(para[2] != 0 and change >= 1){
       change --;
       para[2]--;
    }
    else if(para[1] !=0 and change >= 0.50 ){
      change -=0.50;
      para[1]--;
    }
    else if(para[0] !=0 and change >= 0.25){
      change-=0.25;
      para[0]--;
    } 
    else{
      lcd.clear();
      lcd.print("Kasada yeterli");
      lcd.setCursor(0,1);
      lcd.print("para yoktur..");
      para[2] = tl;
      para[1] = ek;
      para[0] = ykr;
      break;
    }
  }
}
void printP(){
      Serial.print("25 kr sayısı:");
      Serial.println(para[0]);
      Serial.print("50 kr sayısı:");
      Serial.println(para[1]);
      Serial.print("1 tl  sayısı:");
      Serial.println(para[2]);
}
void printPS(){
    for(int i=0;i<5;i++){
      Serial.print("Otamattaki ");
      Serial.print(urunInfo[i].urunad); 
      Serial.print(" adeti: ");
      Serial.println(urunInfo[i].urunstoksayisi);
    } 
}
