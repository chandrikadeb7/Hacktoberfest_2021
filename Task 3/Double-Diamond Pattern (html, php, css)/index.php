<?php
$folder_name = 'Double-Diamond Pattern (html, php, css)';
?>
<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport"
          content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link rel="stylesheet" href="/<?= $folder_name ?>/css/main.css">
    <title>Task 1</title>
</head>
<body>
<main class="contents">
    <?php
        $n = 7;
        //double the columns
        $col_size = $n + $n - 1;
        $n_half = floor($n/2)
    ?>
    <ul class="tasks">
        <li class="part">Task 1</li>
        <ul>
            <li>
                1. Create the given pattern (double-diamond)
            </li>
        </ul>
    </ul>
    <div class="output-container">
        <?php for($row = 0; $row < $n; $row++): ?>
            <div>
                <?php for($col = 0; $col < $col_size; $col++): ?>
                    <?php
                    //first and left side of the triangle form
                    if($col+$row == $n_half || $col == $row + $n_half || $row == $col+$n_half ||
                        $row+$col == $n-1+$n_half
                        //last edge
                        || $col == $row+($n_half*3) || $row+$col == $n-1+$n_half*3): ?>
                        <span class="box">*</span>
                    <?php else: ?>
                        <span class="box"></span>
                    <?php endif; ?>
                <?php endfor; ?>
            </div>
        <?php endfor; ?>
    </div>
</main>
</body>

