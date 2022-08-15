<?php  
$radius = (int)readline('Enter radius: ');  
$height = (int)readline('Enter height: ');
$pie = pi();

$sum = $pie*$height*$radius**2;  
echo "Volume of Cylinder : ". $sum;
?>
