<?php
include 'conexao.php';

// Delete
if (isset($_GET['delete'])) {
    $id = (int)$_GET['delete'];
    $pdo->exec("DELETE FROM ANSWER WHERE ID_ANS=$id");
    echo 'Delete com sucesso o id ' . $id;
}

// UPDATE
// $answer = 'newanswer';
// $pdo->exec("update ANSWER set answer='$answer' where ID_answer=1");

?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/style.css">
    <script src="js/script.js"></script>

    <title>LBDB Tabela</title>
</head>

<style>
    @import url('https://fonts.googleapis.com/css2?family=Roboto:wght@100&display=swap');
    @import url('https://fonts.googleapis.com/css2?family=Poppins:wght@300;500;800&display=swap');
</style>

<body>
    <div class="container">
        <div class="box">
            <div class="box-header">
                LBDB CRUD
            </div>

            <div class="box-content-crud box-content-crud-dy">
                <div id="show-question" class="show-read">
                    <div class="pos-button">
                        <button style="text-align:right;" type="button" onclick="ChangeDiv('show-question', 'show-answer')">Mostrar Respostas</button><br>
                    </div>
                    <div class="show-data">

                    <?php
                    $sql = $pdo->prepare("SELECT * FROM QUESTION");
                    $sql->execute();

                    $fetchQuestion = $sql->fetchAll();
                    foreach ($fetchQuestion as $key => $value) {
                        echo "<b>Cod. da Pergunta:</b> " . $value['ID_QUES'] . "<br>";
                        echo "<b>Questão:</b> " . $value['QUESTION'] . "<br>";
                        echo "<b>Disciplina:</b> " . $value['DISCIPLINE'] . "<br>";
                        echo "<hr>";
                    }
                    ?>
                </div>
                </div>


                <div id="show-answer" class="show-read" style="display:none;">
                    <button type="button" onclick="ChangeDiv('show-question', 'show-answer')">Mostrar Perguntas</button><br>

                    <?php
                    $sql = $pdo->prepare("SELECT * FROM ANSWER");
                    $sql->execute();

                    $fetchAnswer = $sql->fetchAll();

                    foreach ($fetchAnswer as $key => $value) {
                        echo "<b>Cod. da Resposta:</b>" . $value['ID_ANS'] . "<br>";
                        echo "<b>Pergunta:</b>" . $value['ANSWER'] . "<br>";
                        echo "<b>Resposta correta?</b>" . $value['CORRECT'] . "<br>";
                        echo "<b>Cod. da Pergunta:</b>" . $value['ID_QUES'] . "<br>";
                        echo "<hr>";
                        
                        // echo '<a href="?delete=' . $value['ID_ANS'] . '">(X)</a>' . $value['ANSWER'] . ' | ' . $value['CORRECT'] . ' | ' . $value['ID_QUES'];
                        // echo '<hr>';
                    }
                    ?>
                </div>
            </div>
        </div>
    </div>
    </div>

</body>

</html>