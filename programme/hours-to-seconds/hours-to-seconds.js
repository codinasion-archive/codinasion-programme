// Write a programme to convert hours to seconds

"use strict";

let hoursInput = prompt("Hours : ");

console.log("Seconds :", hoursToSeconds(+hoursInput));

function hoursToSeconds(hours) {
  return hours * 3600;
}
