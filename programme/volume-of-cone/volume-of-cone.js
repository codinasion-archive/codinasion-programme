// Write a programmeto compute the volume of a Cone

const radius = 2;
const height = 3;

function volumeOfCone(radius, height) {
  const area = Math.PI * radius * radius * height * (1 / 3);
  return area.toFixed(5);
}

console.log("Radius : ", radius);
console.log("Volume : ", volumeOfCone(radius, height));
