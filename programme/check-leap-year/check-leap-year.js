//Write a program to check leap year

function leapYear(year) {
    if (year % 4 == 0) {
        return "Leap Year";
    }
    else return "Not a Leap Year";
}

let year = prompt("Enter year: ");

console.log("Output : ", leapYear(year));