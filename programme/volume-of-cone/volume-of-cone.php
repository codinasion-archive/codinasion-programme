<?php  
$radius = (int)readline('Enter radius: ');  
$height = (int)readline('Enter height: ');
$piediv3 = pi()/3;

$sum = $piediv3*$height*$radius**2;  
echo "Sum of Inputs : ". $sum;
?>
