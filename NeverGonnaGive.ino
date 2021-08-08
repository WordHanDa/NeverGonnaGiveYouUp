int buzzer = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
digitalWrite(10,HIGH);
}
void L1(int x,int y){                    //C4
  tone(buzzer,262);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void L2(int x,int y){                    //D4
  tone(buzzer,294);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void L3(int x,int y){                    //E4
  tone(buzzer,330);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void L4(int x,int y){                    //F4
  tone(buzzer,349);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void L5(int x,int y){                    //G4
  tone(buzzer,392);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void L6(int x,int y){                    //A4
  tone(buzzer,440);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void L7(int x,int y){                    //B4
  tone(buzzer,494);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void R1(int x,int y){                    //C5
  tone(buzzer,523);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void R2(int x,int y){                    //D5
  tone(buzzer,587);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void R3(int x,int y){                    //E5
  tone(buzzer,659);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void R4(int x,int y){                    //F5
  tone(buzzer,698);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void R5(int x,int y){                    //G5
  tone(buzzer,784);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void R6(int x,int y){                    //A5
  tone(buzzer,880);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void R7(int x,int y){                    //B5
  tone(buzzer,988);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void H1(int x,int y){                    //C6
  tone(buzzer,1047);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void H2(int x,int y){                    //D6
  tone(buzzer,1175);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void H3(int x,int y){                    //E6
  tone(buzzer,1319);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void H4(int x,int y){                    //F6
  tone(buzzer,1397);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void H5(int x,int y){                    //G6
  tone(buzzer,1568);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void H6(int x,int y){                    //A6
  tone(buzzer,1760);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void H7(int x,int y){                    //B6
  tone(buzzer,1976);
  delay(x);
  noTone(buzzer);
  delay(y);
}
void N1(){
  R5(100,0);      //Never
  R6(200,50);
  H1(100,0);      //Gonna
  R6(200,50);
  H3(400,50);     //give
  H3(400,50);     //you
  H2(400,50);     //up
  delay(100);
  R5(100,0);      //Never
  R6(200,50);
  H1(100,0);      //Gonna
  R6(200,50);
  H2(300,50);     //let
  H2(300,50);     //you
  H1(100,0);      //down
  R7(200,0);
  R6(200,50);
  delay(200);
  R5(100,0);      //Never
  R6(200,50);
  H1(100,0);      //Gonna
  R6(200,50);
  H1(400,50);     //run
  H2(200,0);      //around
  R7(200,0);
  R6(300,50);   
  R5(300,50);     //and
  R5(200,0);      //desert
  H2(300,50);
  H1(500,50);     //you
  delay(200);
  R5(100,0);      //Never
  R6(200,50);
  H1(100,0);      //Gonna
  R6(200,50);
  H3(300,50);     //make
  H3(300,50);     //you
  H2(400,50);     //cry
  delay(100);
  R5(100,0);      //Never
  R6(200,50);
  H1(100,0);      //gonna
  R6(200,50);
  H5(400,50);     //say
  R7(100,0);      //goodbye
  H1(100,0);
  R7(150,0);
  R6(200,100);
  delay(100);
  R5(100,0);      //Never
  R6(200,50);
  H1(100,0);      //gonna
  R6(200,50);
  H1(500,50);     //tell
  H2(200,50);     //a
  R7(100,0);      //lie
  R6(100,0);
  R5(200,100);
  R5(200,50);     //and
  H2(300,50);     //hurt
  H1(500,50);     //you
  delay(100);
}
void W3(){
  H1(200,50);     //We've
  H1(300,50);     //known
  R6(300,100);    //each
  H1(200,0);      //other
  H2(400,50);
  R7(300,50);     //for
  R6(100,10);     //so
  R7(100,0);
  R6(100,50);
  R5(400,50);     //long
  delay(100);
  R6(300,50);     //Your
  R6(200,50);     //heart's
  R7(200,50);     //bean
  H1(100,0);      //aching
  R6(200,50);
  R5(300,50);     //but
  H5(200,50);     //you
  H5(200,50);     //to
  H2(400,50);     //shy
  delay(100);
  H3(100,50);     //to
  H2(100,50);     //say
  H1(200,50);     //it
  delay(100);
  H1(150,50);     //Inside
  H1(150,50);
  R6(200,50);     //we
  H1(100,50);     //both
  R6(200,50);     //know
  H1(100,50);     //what's
  H2(200,100);    //been
  R7(100,0);      //going
  R6(100,0);
  R7(100,0);
  R6(200,50);
  R5(500,50);     //on
  delay(100);
  R6(200,50);     //We
  R6(200,50);     //know
  R7(100,50);     //the
  H1(200,50);     //game
  R6(100,50);     //and
  R5(300,100);    //were
  H2(200,0);      //gonna
  H3(300,50);
  H3(400,50);     //play
  H2(200,50);     //it
  delay(100);  
}
void N2(){
  R5(100,0);      //Never
  R6(200,50);
  H1(100,50);     //gonna
  R6(100,0);
  H3(200,50);     //give
  delay(200);
  R5(100,0);      //Never
  R6(200,50);
  H1(100,50);     //gonna
  R6(100,0);
  H3(200,50);     //give
  delay(200);
  H1(300,50);     //give
  H1(300,50);     //you
  R5(200,50);     //up
  delay(200);
}
void I4(){
  H1(600,100);    //I
  H2(200,50);     //just
  H3(300,0);      //wanna
  H1(300,100);
  H2(300,50);     //tell
  H2(170,50);     //you
  H2(170,50);     //How
  H3(170,50);     //I'm
  H2(200,0);      //feeling
  R5(500,100);
  delay(100);
  R6(200,0);      //Gotta
  R7(300,50);
  H1(300,50);     //make
  R6(300,50);     //you
  H2(200,0);      //understand
  H3(300,0);
  H2(400,50);
}
void loop() {
 //
 /* H1(500,50);
  H2(500,50);
  R5(500,50);
  H2(500,50);
  H3(300,50);
  H5(300,50); 
  H4(300,50);
  H3(300,50);
  H1(300,50);
  H2(300,50);
  R5(300,50);
  delay(100);
  R5(300,50);
  R5(300,50);
  R6(300,50);
  H1(300,50);
  R6(300,50);
  H1(300,50);
  H2(300,50);
  R5(300,50);
  H2(300,50);
  H3(300,50);
  H5(300,50);
  H4(300,50);
  H3(300,50);
  H1(300,50);
  H2(300,50);
  R5(300,50);
  delay(1000);
*/
  R6(250,50);      //We're
  R7(250,50);      //no
  H1(300,50);      //strangers
  H1(300,50);
  H2(200,100);      //to
  R7(100,10);       //love
  R6(200,10);
  R5(300,100);
  delay(100);
  R6(300,50);      //You
  R6(300,50);      //know
  R7(300,50);      //the
  H1(300,50);      //rules
  R6(300,50);
  R5(100,50);      //and
  H5(100,50);      //so
  H5(300,50);      //do
  H2(500,50);      //I
  delay(100);
  R6(200,50);      //A
  R6(300,50);      //full
  R7(200,50);      //commitment's
  H1(200,50);      
  R6(200,100);
  H1(100,100);     //what
  H2(200,100);     //I'm
  R7(200,50);      //thinking
  R6(250,50);
  R6(300,50);
  R5(400,100);     //of
  delay(100);
  R6(300,50);      //You
  R6(300,0);       //wouldn't
  R7(200,50);      
  H1(100,50);      //get
  R6(200,50);      //this
  R5(300,50);      //from
  H2(200,0);       //any
  H2(100,50);      
  H2(200,50);      //other
  H3(300,50);
  H2(400,100);     //guy
  delay(100);
  
  I4();
  
  delay(100);
  N1();
  
  W3();
  
  H1(600,50);     //And
  H2(200,50);     //if
  H3(300,50);     //you
  H2(200,50);     //ask
  H2(200,50);     //me
  H2(200,50);     //how
  H3(300,50);     //I'm
  H2(300,0);      //felling
  R5(300,50);
  delay(100);
  R5(200,50);     //Don't
  R6(300,50);     //tell
  R7(200,50);     //me
  H1(200,50);     //you're
  R6(300,50);     //too
  H2(300,50);     //blind
  H3(300,50);     //to
  H2(500,50);     //see
  delay(100);
  
  N1();
  
  N1();
  
  delay(2000);
  H1(400,50);     //Give
  H1(400,50);     //you
  R5(200,50);     //up
  delay(2000);
  H1(400,50);     //Give
  H1(400,50);     //you
  R5(200,50);     //up
  delay(500);
  
  N2();
  N2();
  W3();
  I4();
  N1();
  N1();
  N1();
}
