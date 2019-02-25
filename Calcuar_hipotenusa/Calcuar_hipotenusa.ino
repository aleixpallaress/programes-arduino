

int a = 3;
int b = 4;
int h =0; 

void setup() {
 Serial.begin(9600);       //set up Serial library at 9600 bps

 Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  h = sqrt(pow(a,2) +pow(b,2));
  Serial.println(h);

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
