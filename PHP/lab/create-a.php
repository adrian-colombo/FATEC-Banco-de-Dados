<?php
include 'conexao.php';
// Delete
// if (isset($_GET['delete'])) {
//     $id = (int)$_GET['delete'];
//     $pdo->exec("DELETE FROM ANSWER WHERE ID_ANS=$id");
//     echo 'Delete com sucesso o id ' . $id;
// }

//Insert.



if (isset($_POST['answer'])) {
    $_POST['correct'] = ( isset($_POST['X']) ) ? true : null;

    $sql = $pdo->prepare("INSERT INTO ANSWER VALUES (null, ?, ?, ?)");
    $sql->execute(array($_POST['answer'], $_POST['correct'], $_POST['id_ques']));
    echo ("<script>
    window.alert('Cadastro efetuado com sucesso')
    window.location.href='http://localhost/lab/index.php';
</script>");

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

    <title>LBDB Criar Resposta</title>
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

            <div class="box-content-crud">
                <form method="post">
                    <label>Cadastre a resposta:</label>
                    <textarea type="text" name="answer" class="width-input" style="width:24rem; height:5.5rem;" maxlength="255"></textarea><br><br>
                    <label>ID da Pergunta:</label>
                    <input type="number" name="id_ques" class="width-input" style="width:24rem;" maxlength="255"><br><br>
                    <label>Pergunta correta?</label>
                    <input type="checkbox" name="correct" value="X" checked>
                    <br><br><br><input type="submit" value="Send" onclick="window.open">
                </div>
                </form>

                 <?php
                // $sql = $pdo->prepare("SELECT * FROM ANSWER");
                // $sql->execute();

                // $fetchAnswer = $sql->fetchAll();

                // foreach ($fetchAnswer as $key => $value) {
                //     echo '<a href="?delete=' . $value['ID_ANS'] . '">(X)</a>' . $value['ANSWER'] . ' | ' . $value['CORRECT'];
                //     echo '<hr>';
                // }
                ?>
            </div>
        </div>
    </div>

</body>

</html>