<?php

function radToDeg(int|float $rad) {
    return round($rad * 180 / pi(), 4);
}

$rad = readline("Enter the value in radian : ");
$deg = radToDeg($rad);

print "\nRadian : {$rad}";
print "\nDegrees : {$deg}";

?>