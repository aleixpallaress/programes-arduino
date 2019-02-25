int tempAigua = 90;
int aigua = 100;

void setup()               //run once, when the sketch starts

{
  Serial.begin(9600);     // set up Serial library at 9600 bps

 if (tempAigua >= 100)
 {
  
    Serial.print("Aigua supera els 100C, esta bullint!");
}

 else 
 
 Serial.print ("Aigua ancara no bull");

} 
 

 
void loop() {
  // put your main code here, to run repeatedly:

}
