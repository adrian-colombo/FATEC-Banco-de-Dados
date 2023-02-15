<?php
$pdo = new PDO('mysql:host=localhost;dbname=p&r', 'root', 'root'); /* Mudar password NULL pra root */
$pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
?>