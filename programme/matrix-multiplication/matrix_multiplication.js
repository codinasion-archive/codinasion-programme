// Write a program to print multiplication of 2 matrices

"use strict";

// perform following command to run programme
// node matrix_multiplication.js

const A = [Array(3).fill(1), Array(3).fill(2), Array(3).fill(3)];
const B = [Array(3).fill(1), Array(3).fill(2), Array(3).fill(3)];

let result = [Array(3).fill(0), Array(3).fill(0), Array(3).fill(0)];

for (let i = 0; i < A.length; i++) {
  for (let j = 0; j < B.length; j++) {
    for (let k = 0; k < B.length; k++) {
      result[i][j] += A[i][k] * B[k][j];
    }
  }
}

for (const r of result) {
  console.log(r.toString());
}
