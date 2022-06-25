<?
// Write a programme to find the area of a rectangle.

// Formula: area = length * width

function calculate_area(int|float $length, int|float $width) {

    $area = $length * $width;
    return $area;

}

$length = readline('Enter the length: ');
$width = readline('Enter the width: ');
$area = calculate_area($length, $width);

print "\nLength: {$length}";
print "\nWidth : {$width}";
print "\nCalculated Area: {$area}";

?>