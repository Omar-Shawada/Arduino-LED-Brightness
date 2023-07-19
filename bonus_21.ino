int led=9;
byte x=0;
int fa=5;
void setup(){
  pinMode(9,OUTPUT);}
void loop(){
  analogWrite(led,x);
  x=x+fa;
  if(x>=255||x<=0)
    fa=-fa;
  delay(50);}