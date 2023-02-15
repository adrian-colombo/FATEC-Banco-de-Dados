<?php
include 'conexao.php';
if (isset($_GET['delete'])) {
    $id = (int)$_GET['delete'];
    $pdo->exec("DELETE FROM QUESTION WHERE ID_QUES=$id");
    echo 'Delete com sucesso o id ' . $id;
}

//Insert.
if (isset($_POST['question'])) {

    $sql = $pdo->prepare("INSERT INTO QUESTION VALUES (null, ?, ?)");
    $sql->execute(array($_POST['question'], $_POST['discipline']));
    echo ("<script>
    window.alert('Cadastro efetuado com sucesso')
    window.location.href='http://localhost/lab/index.php';
</script>");
}

// UPDATE
// $question = 'newquestion';
// $pdo->exec("update QUESTION set question='$question' where ID_QUES=1");

?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/style.css">
    <link rel="stylesheet" href="css/pop-up.css">
    <script src="js/script.js"></script>

    <title>LBDB Criar Questão</title>
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
                    <label>Cadastre a questão:</label>
                    <textarea type="textarea" name="question" class="width-input" style="width:24rem; height:5.5rem;" maxlength="255"></textarea><br><br><br>
                    <label>Selecione a disciplina desta questão: </label>
                    <select name="discipline" style="width:24rem;">
                        <option value="Fundamentos de Redes">Fundamentos de Redes</option>
                        <option value="Estrutura de Dados">Estrutura de Dados</option>
                        <option value="Estatísticas">Estatísticas</option>
                    </select>
                    <br><br><br><br><br><br><input type="submit" value="Send" onclick="window.open">
                </div>
                </form>

                <?php
                $sql = $pdo->prepare("SELECT * FROM QUESTION");
                $sql->execute();

                $fetchQuestion = $sql->fetchAll();

                foreach ($fetchQuestion as $key => $value) {
                    echo '<a href="?delete=' . $value['ID_QUES'] . '">(X)</a>' . $value['QUESTION'] . ' | ' . $value['DISCIPLINE'];
                    echo '<hr>';
                }
                ?>
            </div>
        </div>
    </div>

</body>

</html>