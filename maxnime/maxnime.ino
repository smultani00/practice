int sfsr;
int sfsra;
int sfsrb;
int sfsrc;
int sfsrd;
int sfsre;
int sfsrf;
int sfsrg;
int sfsrh;
int sfsri;
int sfsrj;

void setup() {
  Serial.begin(9600);
}
void loop() {
  delay(1);

if (analogRead(A0) <= 500){
    sfsr=0;
    }
  else {
    sfsr=analogRead(A0);
    }

if (analogRead(A1) <= 500){
    sfsra=0;
    }
  else {
    sfsra=analogRead(A1);
    }
    
if (analogRead(A2) <= 500){
    sfsrb=0;
    }
  else {
    sfsrb=analogRead(A2);
    }
  
if (analogRead(A3) <= 500){
    sfsrc=0;
    }
  else {
    sfsrc=analogRead(A3);
    }
    
if (analogRead(A4) <= 500){
    sfsrd=0;
    }
  else {
    sfsrd=analogRead(A4);
    }
    
if (analogRead(A5) <= 500){
    sfsre=0;
    }
  else {
    sfsre=analogRead(A5);
    }

if (analogRead(A6) <= 500){
    sfsrf=0;
    }
  else {
    sfsrf=analogRead(A6);
    }

if (analogRead(A7) <= 500){
    sfsrg=0;
    }
  else {
    sfsrg=analogRead(A7);
    }

if (analogRead(A8) <= 500){
   sfsrh=0;
    }
  else {
    sfsrh=analogRead(A8);
    }

if (analogRead(A9) <= 500){
   sfsri=0;
    }
  else {
    sfsri=analogRead(A9);
    }

if (analogRead(A10) <= 500){
    sfsrj=0;
    }
  else {
    sfsrj=analogRead(A10);
    }




  Serial.print(sfsr);
  Serial.print(" ");
  Serial.print(sfsra);
  Serial.print(" ");
  Serial.print(sfsrb);
  Serial.print(" ");
  Serial.print(sfsrc);
  Serial.print(" ");
  Serial.print(sfsrd);
  Serial.print(" ");
  Serial.print(sfsre);
  Serial.print(" ");
  Serial.print(sfsrf);
  Serial.print(" ");
  Serial.print(sfsrg);
  Serial.print(" ");
  Serial.print(sfsrh);
  Serial.print(" ");
  Serial.print(sfsri);
  Serial.print(" ");
  Serial.println(sfsrj);
  Serial.println(" ");
   
  
}
