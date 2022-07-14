// Write a programme to find index of an alphabet

const alphabets = "abcdefghijklmnopqrstuvwxyz";
const alphabet = "C";

function getIndexOfAlphabet(alphabet){
    for (let i = 0; i < alphabets.length; i++){
        if (alphabets[i] == alphabet.toLowerCase()){
            return i + 1;
        }
    }
}
console.log("Input: ", alphabet)
console.log("Index: ", getIndexOfAlphabet(alphabet));