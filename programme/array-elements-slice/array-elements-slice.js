// Write a programme to generate new array with sliced elements of old array

// define array
array_list = ["abcd", "efgh", "ijklmn", "opq", "rstuvw", "xyz"];
console.log("Array :", array_list);

// function arguments (arrayList) (start slice from -number) (end slice with -number)
function arrayLetterRange(a_list, start = 0, end = 2) {
  // store slice value in result
  let result = [];
  for (let i = 0; i < a_list.length; i++) {
    const element = a_list[i];
    let sliced_val = element.slice(start - 1, end);

    // check slice value if not empty
    if (sliced_val != "") {
      result.push(sliced_val);
    }
  }
  return result;
}

// define range
let start = 2;
let end = 3;

// call the function
let array_result = arrayLetterRange(array_list, start, end);
console.log("Start :", start);
console.log("End   :", end);
console.log("\nSliced Array :", array_result);
