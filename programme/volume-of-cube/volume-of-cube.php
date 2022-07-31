<?php
// Write a programmeto find volume of a cube

function cube($number)
{

    if (!is_numeric($number)) {

        return 'Invalid input : Input is not a number';

    } elseif ($number < 0) {

        return "Invalid input : Input cant' be negative";

    } elseif ($number == 0) {

        return "Invalid input : Input cant' be 0";
    }

    return pow($number, 3);
}

$number = readline("Enter cube side  : ");
$cube = cube($number);

print "\nSide   of Cube : {$number}";
print "\nVolume of Cube : {$cube}\n";
