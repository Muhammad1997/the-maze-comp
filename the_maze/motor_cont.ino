
//func for forword moove

  void forword(int s){
  analogWrite(m12,s);
  digitalWrite(m11,0);
  analogWrite(m22,s);
  digitalWrite(m21,0);
  }

  //func for stop
  
  void stp(){
  analogWrite(m12,0);
  digitalWrite(m11,0);
  analogWrite(m22,0);
  digitalWrite(m21,0);    
    }

   //fun for move a little  
   
   void littel(int sr,int sl){
  analogWrite(m12,sr);
  digitalWrite(m11,0);
  analogWrite(m22,sl);
  digitalWrite(m21,0);    
    }
