<?php
// Write a programme to find the area of a right angle triangle
// Formula: area = 1/2 * base * height

function calculate_area(int | float $base, int | float $height)
{

    if (!is_numeric($base)) {

        return 'Invalid input: Base is not a number';

    }

    if (!is_numeric($height)) {

        return 'Invalid input: Height is not a number';

    }

    $area = ($base * $height) / 2;
    return $area;
}

$base = readline('Enter the base   : ');
$height = readline('Enter the height : ');
$area = calculate_area($base, $height);
print "\nBase   : $base";
print "\nHeight : $height";
print "\nCalculated Area : $area\n";
