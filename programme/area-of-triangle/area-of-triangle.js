// Write a programme to find area of triangle

"use strict";

function area(a, b, c) {
  let s = (a + b + c) / 2;
  let product = Math.sqrt(s * (s - a) * (s - b) * (s - c));

  return product;
}

let a = prompt("a : ");
let b = prompt("b : ");
let c = prompt("c : ");
let s = (+a + +b + +c) / 2;

console.log("\ns :", s);

console.log("\narea :", area(+a, +b, +c));
