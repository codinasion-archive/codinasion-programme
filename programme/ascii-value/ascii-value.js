// Write a programme to print ASCII Value of a character

function character_to_ascii(n) {
  return n.charCodeAt(0);
}

let char = "A";
console.log("Input  : " + char);
console.log("Output :", character_to_ascii(char));
