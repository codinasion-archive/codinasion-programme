// Write a programme to find volume of a cuboid

// Input: length, width, height
const l = 2;
const w = 3;
const h = 4;

console.log("Length of Cuboid : " + l);
console.log("Width  of Cuboid : " + w);
console.log("Height of Cuboid : " + h);

function volumeCuboid(l, w, h) {
  return l * w * h;
}

console.log("\nVolume of Cuboid : " + volumeCuboid(l, w, h));
