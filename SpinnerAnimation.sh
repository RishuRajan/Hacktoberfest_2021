#!/bin/bash
 
clear
spinner=( Ooooo oOooo ooOoo oooOo ooooO oooOo ooOoo oOooo);
 
 
count(){
  spin &
  pid=$!
 
  for i in `seq 1 10`
  do
    sleep 1;
  done
 
  kill $pid 2>/dev/null
}
 
spin(){
  while [ 1 ]
  do 
    for i in ${spinner[@]}; 
    do 
      echo -ne "\r$i";
      sleep 0.2;
    done;
  done
}
 
count
