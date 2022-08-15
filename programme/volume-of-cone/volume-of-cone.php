// Write a programme to calculate volume of cone

<?php  
$radius = (int)readline('Enter radius: ');  
$height = (int)readline('Enter height: ');
$piediv3 = pi()/3;

$sum = $piediv3*$height*$radius**2;  
echo "Volume of Cone : ". $sum;
?>
