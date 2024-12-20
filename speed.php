<?php
define('START_TIME', microtime(true));
$res_php = '';
$res_c = '';
for($i = 0; $i < 9000; $i++) {
    $res_c .= `./a.out`;
    //$res_php .= `php ./index.php`;
}

echo $res_php . PHP_EOL;
echo $res_c . PHP_EOL;

printf("Время работы скрипта: %.5f с \n", microtime(true) - START_TIME);