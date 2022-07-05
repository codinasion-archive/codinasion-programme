<?php
// Write a programme to find the area of a rectangle
// Formula: area = length * width

function calculate_area(int | float $length, int | float $width)
{

    if (!is_numeric($length)) {

        return 'Invalid input: Length is not a number';

    }

    if (!is_numeric($width)) {

        return 'Invalid input: Width is not a number';

    }

    $area = $length * $width;
    return $area;

}

$length = readline('Enter the length : ');
$width = readline('Enter the width  : ');
$area = calculate_area($length, $width);
print "\nLength : {$length}";
print "\nWidth  : {$width}";
print "\nCalculated Area : {$area}\n";
