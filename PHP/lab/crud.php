<?php
    $pdo = new PDO('mysql:host=localhost;dbname=p&r', 'root', 'root');
    //Insert.
    if (isset($_GET['delete'])){
        $id = (int)$_GET['delete'];
        $pdo->exec("DELETE FROM QUESTION WHERE ID_QUES=$id");
        echo 'Delete com sucesso o id '.$id;
    }

    if(isset($_POST['question'])){
        $sql = $pdo->prepare("INSERT INTO QUESTION VALUES (null, ?, ?)");
        $sql->execute(array($_POST['question'], $_POST['discipline']));
        echo 'Inserido com sucesso!';
    }

    // UPDATE
    $question = 'newquestion';
    $pdo->exec("update QUESTION set question='$question' where ID_QUES=1");
    
    ?>

    <form method="post">
        <input type="text" name="question">
        <input type="text" name="discipline">
        <input type="submit" value="Send">
    </form>


<?php
    $sql = $pdo->prepare("SELECT * FROM QUESTION");
    $sql->execute();

    $fetchQuestion = $sql->fetchAll();

    foreach ($fetchQuestion as $key => $value) {
        echo '<a href="?delete='.$value['ID_QUES'].'">(X)</a>'.$value['QUESTION'].' | '.$value['DISCIPLINE'];
        echo '<hr>';
    }
?>