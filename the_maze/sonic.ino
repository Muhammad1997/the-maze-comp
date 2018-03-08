//to calculate the distance using sonic data

float sonic () { 
  
 int t1,t2,t3; //time var

 
 //to check the sonic is low 
 digitalWrite(tr,0); 
 digitalWrite(tm,0);
 digitalWrite(tl,0);
 delayMicroseconds(5);

 //active the trigger 
 digitalWrite(tr,1);
 digitalWrite(tm,1);
 digitalWrite(tl,1);
 delayMicroseconds(10);

 //deactivate the trigger 
 digitalWrite(tr,0);
 digitalWrite(tm,0);
 digitalWrite(tl,0);

 //get the time from echo
 t1 = pulseIn(er,1);
 t2 = pulseIn(em,1);
 t3 = pulseIn(el,1);

 //calculate the dis
 d1 = (t1/2)*0.034;
 d2 = (t2/2)*0.034;
 d3 = (t3/2)*0.034;

 //print the sonic data
 Serial.print("right sonic:");
 Serial.print(d1);
 Serial.print("    ");
 Serial.print("middle sonic:");
 Serial.print(d2);
 Serial.print("    ");
 Serial.print("left sonic:");
 Serial.println(d3);

 
 //return the value of distanse
 return d1,d2,d3;
  }
