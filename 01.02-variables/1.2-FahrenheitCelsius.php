<?php
function main()
{
	$fahrenheit;
	$celsius;
	$lower;
	$upper;
	$step;

	$lower = 0;
	$upper = 300;
	$step = 20;

	$fahrenheit = $lower;
	while($fahrenheit < $upper)
	{
		$celsius = intval(5*($fahrenheit-32)/9);
		print_r($fahrenheit."\t".$celsius."\n");
		$fahrenheit = $fahrenheit + $step;
	}	

}
main();