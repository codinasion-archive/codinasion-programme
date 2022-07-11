// Write a programme to convert radian to degree

"use strict";

function radian_to_degree(radian) {
  var pi = Math.PI;
  return radian * (180 / pi);
}

let radianInput = prompt("Radial : ");

console.log("Input  : " + radianInput);
console.log("Output : " + radian_to_degree(radianInput).toFixed(5));
