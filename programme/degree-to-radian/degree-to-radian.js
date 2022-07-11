// Write a programme to convert degree to radian

function degrees_to_radians(degrees) {
  var pi = Math.PI;
  return degrees * (pi / 180);
}

degree = 1;
console.log("Input  : " + degree);
console.log("Output : " + degrees_to_radians(degree).toFixed(5));
