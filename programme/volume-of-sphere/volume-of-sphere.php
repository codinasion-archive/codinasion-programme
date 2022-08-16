// Write a programme to calculate volume of sphere

<?php  
$radius = (int)readline('Enter radius: ');  
$piemultiplied = 4/3*pi();

$sum = $piemultiplied*$radius**3;  
echo "Volume of Sphere : ". $sum;
?>
