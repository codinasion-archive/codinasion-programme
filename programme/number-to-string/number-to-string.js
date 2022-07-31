// Write a programmeto convert number to strings

const words = [
  "Zero",
  "One",
  "Two",
  "Three",
  "Four",
  "Five",
  "Six",
  "Seven",
  "Eight",
  "Nine",
];

convert(12223455);

function convert(input) {
  if (typeof input != "number") return console.error("Not a number");
  console.log("Input  :", input);

  var inp = input.toString();

  let arr = [];

  for (let i = 0; i < inp.length; i++) {
    if (inp[i] === ".") arr.push("point");
    else arr.push(words[inp[i]]);
  }

  console.log("Output :", ...arr);
}
