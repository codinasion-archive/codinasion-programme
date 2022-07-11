// Write a programme to convert radian to degree

function radian_to_degree(degrees) {
  var pi = Math.PI;
  return degrees * (180 / pi);
}

radian = 1;
console.log("Input  : " + radian);
console.log("Output : " + radian_to_degree(radian).toFixed(5));
