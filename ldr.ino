// BARIŞ GÜNAY - 21.05.2020



#define kirmizi 4 //3.pinde kirmizi led
#define yesil 3 //4.pinde yesil led

void setup() {
pinMode(kirmizi, OUTPUT);
pinMode(yesil, OUTPUT);
Serial.begin(9600);
}

void loop() {
int isik = analogRead(A5); //Analog A0 sensor bagli
delay(50);
Serial.println(isik);
//Bu 900 sayisini duruma gore degistirebilirsiniz
int seviye = 880;
if(isik >= seviye ){ //isik siddeti seviyeden buyuk isik alma
Serial.println(1);  
digitalWrite(kirmizi, LOW); //kirmizi yanma
digitalWrite(yesil, HIGH); //yesil yan
}
if(isik < seviye ){ //isik siddeti seviyeden kucuk isik almama
Serial.println(0);
digitalWrite(kirmizi, HIGH); //kirmizi yan
digitalWrite(yesil, LOW); //yesil yanma
}
}
