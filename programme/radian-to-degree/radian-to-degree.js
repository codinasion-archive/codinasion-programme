//Write a programme to convert radian to degree

"use strict";

let radialInput = prompt("Radial : ");

//perform the following command to run programme
//node radian-to-degree
console.log("Degrees :", radialToDegrees(+radialInput));

radialToDegrees(rapdial){
  var pi = Math.PI;
  return radians * (180/pi);
}