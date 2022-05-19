'use strict'

let hoursInput = prompt('Hours: ');

console.log('Seconds: ', hoursToSeconds(+hoursInput));

function hoursToSeconds(hours) {
  return hours * 3600;
};
