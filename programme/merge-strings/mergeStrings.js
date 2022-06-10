// Write a programme to merge two strings

const mergeStrings = (Str1, Str2) => {
  let result = Str1.concat(Str2);
  return result;
};

//test code
console.log("String 1 : Hello");
console.log("String 2 : _World");
console.log("\nMerged String : ", mergeStrings("Hello", "_World"));
