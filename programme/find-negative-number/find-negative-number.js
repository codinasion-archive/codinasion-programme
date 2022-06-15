// find the negative number of a number
// quick def (9 = -9 and -9 = 9 and string = not a number)



// let number = "9"
let number = 89.09

function findNegativeNum(num) {
    // this keep you float value in float
    if (typeof num === 'number') {
        let negative = num - (num*2)
        return negative;
    }
    else{
        // try to convert string into number if possible ("9") != number
        if (parseInt(num)) {
            let negative = num - (num*2)
            return negative;
        }
        else{
            return "Can not convert into number\nNot a Number"
        }
    }
}

let result = findNegativeNum(number)
console.log(result)