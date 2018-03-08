//to make the robot able to move without touching the wall

void maze_follow(){
  
  sonic (); //call the function of ultra-sonic

  if ((d2>15)&&(d1<=10)&&(d3<=10)){ //condition 1
    if(d1==d3){forword(255);} //condition 1.1
    else if (d1<d3){littel(240,180);} //condition 1.2
    else if (d1>d3){littel(180,240);} //condition 1.3
    }
    
  else if ((d2<=15)&&(d1<=10)&&(d3>=10)){ //condition 2
    }
    stp_h();
    delay(200);
    
  }
